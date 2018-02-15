#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int hello_world(){
    printf("%s\n", "Hello World");
    return 0;
}

int arr_length(int *arr){
    return (sizeof(arr)/sizeof(int))+1;
}
/**
* 
*
int * param_to_arr(int argc, ...){
    int new_arr[argc];
    va_list args;
    va_start(args, argc);
    for (int i = 0; i < argc; i++) {
        new_arr[i] = (int) va_arg(args, argc);
    }
    va_end(args);
    return new_arr;
}
*/

int main(int argc, char const *argv[]) {
    hello_world();
    int arr_test[3] = {1, 2, 3};
    printf("Array is of %i length. \n", arr_length(arr_test));
    return 0;
}
