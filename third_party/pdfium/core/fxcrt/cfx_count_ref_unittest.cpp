// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/fxcrt/include/cfx_count_ref.h"

#include <map>
#include <string>

#include "testing/fx_string_testhelpers.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace {

class Observer {
 public:
  void OnConstruct(const std::string& name) { construction_counts_[name]++; }
  void OnDestruct(const std::string& name) { destruction_counts_[name]++; }
  int GetConstructionCount(const std::string& name) {
    return construction_counts_[name];
  }
  int GetDestructionCount(const std::string& name) {
    return destruction_counts_[name];
  }

 private:
  std::map<std::string, int> construction_counts_;
  std::map<std::string, int> destruction_counts_;
};

class Object {
 public:
  Object(Observer* observer, const std::string& name)
      : name_(name), observer_(observer) {
    observer->OnConstruct(name_);
  }
  Object(const Object& that) : name_(that.name_), observer_(that.observer_) {
    observer_->OnConstruct(name_);
  }
  ~Object() { observer_->OnDestruct(name_); }

 private:
  std::string name_;
  Observer* observer_;
};

}  // namespace

TEST(fxcrt, CountRefNull) {
  Observer observer;
  {
    CFX_CountRef<Object> ptr;
    EXPECT_EQ(nullptr, ptr.GetObject());
  }
}

TEST(fxcrt, CountRefCopy) {
  Observer observer;
  {
    CFX_CountRef<Object> ptr1;
    ptr1.New(&observer, std::string("one"));
    {
      CFX_CountRef<Object> ptr2 = ptr1;
      EXPECT_EQ(1, observer.GetConstructionCount("one"));
      EXPECT_EQ(0, observer.GetDestructionCount("one"));
    }
    {
      CFX_CountRef<Object> ptr3(ptr1);
      EXPECT_EQ(1, observer.GetConstructionCount("one"));
      EXPECT_EQ(0, observer.GetDestructionCount("one"));
    }
    EXPECT_EQ(1, observer.GetConstructionCount("one"));
    EXPECT_EQ(0, observer.GetDestructionCount("one"));
  }
  EXPECT_EQ(1, observer.GetDestructionCount("one"));
}

TEST(fxcrt, CountRefAssignOverOld) {
  Observer observer;
  {
    CFX_CountRef<Object> ptr1;
    ptr1.New(&observer, std::string("one"));
    ptr1.New(&observer, std::string("two"));
    EXPECT_EQ(1, observer.GetConstructionCount("one"));
    EXPECT_EQ(1, observer.GetConstructionCount("two"));
    EXPECT_EQ(1, observer.GetDestructionCount("one"));
    EXPECT_EQ(0, observer.GetDestructionCount("two"));
  }
  EXPECT_EQ(1, observer.GetDestructionCount("two"));
}

TEST(fxcrt, CountRefAssignOverRetained) {
  Observer observer;
  {
    CFX_CountRef<Object> ptr1;
    ptr1.New(&observer, std::string("one"));
    CFX_CountRef<Object> ptr2(ptr1);
    ptr1.New(&observer, std::string("two"));
    EXPECT_EQ(1, observer.GetConstructionCount("one"));
    EXPECT_EQ(1, observer.GetConstructionCount("two"));
    EXPECT_EQ(0, observer.GetDestructionCount("one"));
    EXPECT_EQ(0, observer.GetDestructionCount("two"));
  }
  EXPECT_EQ(1, observer.GetDestructionCount("one"));
  EXPECT_EQ(1, observer.GetDestructionCount("two"));
}

TEST(fxcrt, CountRefGetModify) {
  Observer observer;
  {
    CFX_CountRef<Object> ptr;
    EXPECT_NE(nullptr, ptr.GetModify(&observer, std::string("one")));
    EXPECT_EQ(1, observer.GetConstructionCount("one"));
    EXPECT_EQ(0, observer.GetDestructionCount("one"));

    EXPECT_NE(nullptr, ptr.GetModify(&observer, std::string("one")));
    EXPECT_EQ(1, observer.GetConstructionCount("one"));
    EXPECT_EQ(0, observer.GetDestructionCount("one"));
    {
      CFX_CountRef<Object> other(ptr);
      EXPECT_NE(nullptr, ptr.GetModify(&observer, std::string("one")));
      EXPECT_EQ(2, observer.GetConstructionCount("one"));
      EXPECT_EQ(0, observer.GetDestructionCount("one"));
    }
    EXPECT_EQ(2, observer.GetConstructionCount("one"));
    EXPECT_EQ(1, observer.GetDestructionCount("one"));
  }
  EXPECT_EQ(2, observer.GetDestructionCount("one"));
}
