/*
 * Copyright (c) 2015 KingSoft.com, Inc. All Rights Reserved
 *
 * @file MyWrapper.h
 * @author changyonggang(changyonggang@kingsoft.com)
 * @date 2022/4/18 4:18 PM
 * @brief
 *
*/
#ifndef C_INTEGRATE_CPP_MYWRAPPER_H
#define C_INTEGRATE_CPP_MYWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MyClass MyClass;

MyClass* newMyClass();

void MyClass_int_set(MyClass* v, int i);

int MyClass_int_get(MyClass* v);

void deleteMyClass(MyClass* v);

#ifdef __cplusplus
}
#endif

#endif //C_INTEGRATE_CPP_MYWRAPPER_H
