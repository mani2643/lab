#include<stdio.h>

// program to print memory allocation for all data types in C;

// int needs 4 bytes memory
// float needs 4 bytes of memory
// char needs only 1 byte
// short needs only 2 bytes of memory
// double needs 8 bytes of memory

// sizeof() asks how many bytes does this data type need;
// %zu is used to print the value returned by the sizeof(); similar to the %f is used to print float

int main(){
    printf("char: %zu \n",sizeof(char));
    printf("float: %zu \n",sizeof(float));
    printf("integer: %zu \n",sizeof(int));
    printf("short: %zu \n",sizeof(short));
    printf("double: %zu \n",sizeof(double));

    return 0;
}