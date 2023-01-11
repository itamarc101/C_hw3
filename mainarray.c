#include <stdio.h>
#include <stdlib.h>
#include "hw3Array.h"
#define SIZE 50

int main(){
    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",(arr+i));
    }
    insertion_sort(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        if(i == (SIZE-1)) printf("%d\n",*(arr+i)); 
        else printf("%d,",*(arr+i));
        
    }
    return 0;
}
