// 2. Write a C program using double pointerts.
#include <stdio.h>
int main() 
{
    int value = 10;
    int *ptr = &value;
    int **double_ptr = &ptr;
    printf("value: %d\n", **double_ptr);
    printf("Address of value: %p\n", (void*)&value);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address stored in double_ptr: %p\n", (void*)double_ptr);
    return 0;
}