/*
 * Copyright (c) 2015 KingSoft.com, Inc. All Rights Reserved
 *
 * @file MyWrapper.cc
 * @author changyonggang(changyonggang@kingsoft.com)
 * @date 2022/4/18 4:19 PM
 * @brief
 *
*/

//#include <cstddef>
#include "MyClass.h"
#include "MyWrapper.h"

extern "C" {
MyClass* newMyClass() {
    return new MyClass();
//    return NULL;
}

void MyClass_int_set(MyClass* v, int i) {
    v->int_set(i);
}

int MyClass_int_get(MyClass* v) {
    return v->int_get();
}

void deleteMyClass(MyClass* v) {
    delete v;
}
}