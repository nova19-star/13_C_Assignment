// 4. Write a C program to implement the generic pointers or void pointers.
#include <stdio.h>
int main(){
    int a = 10;
    float b = 3.5;
    void *p;
    p = &a;
    printf("%u\n",p);
    printf("%d\n",a);
    printf("%d\n",*(int*)p);
    p = &b;
    printf("%f\n",*(float*)p);
    return 0;
}