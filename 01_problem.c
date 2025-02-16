// 1. Write a C program to toke user input an stoae it in a variable and display the value and address of the the variable.
#include <stdio.h>
int main()
{
    int value;
    int *ptr = &value;
    printf ("Enter a value: ");
    scanf("%d", & value);
    printf ("Value entered: %d\n", value);
    printf ("Address of the variable: %u\n", (void*)ptr);
    return 0;
}
