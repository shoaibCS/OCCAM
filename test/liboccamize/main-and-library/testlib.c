#include <stdio.h>

#include "testlib.h"

int add(int a, int b){
    return a + b;
}


int sub(int a, int b){
    return a - b;
}

int twice(int a){
    return add(a,a);
}
