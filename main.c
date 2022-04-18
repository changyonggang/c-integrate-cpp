#include <stdio.h>
#include "sub_lib/include/MyWrapper.h"

int main() {
    printf("Hello, World!\n");
    struct MyClass* c = newMyClass();
    MyClass_int_set(c, 3);
    printf("%i\n", MyClass_int_get(c));
    deleteMyClass(c);
    return 0;
}
