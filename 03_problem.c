// Write a C program to input array elements and display their address.
#include <stdio.h> 
int main() 
{
    int n; 
    printf("Enter the number of elements:"); 
    scanf ("%d", &n); 
    int arr[n]; 
    printf("Enter %d elements: \n", n); 
    for(int i=0; i<n; i++){ 
        printf("Element %d:", i+1); 
        scanf("%d", & arr[i]);
    }
    printf("\nAddress of the array elements: \n"); 
    for (int i=0; i<n; i++){
        printf("Address of array [%d]: %p\n", i, (void*) &arr [i]);
    }
    return 0;
}