#include <stdio.h>
#include <stdlib.h>
#include "hw3Array.h"
void shift_element(int* arr, int i){

    while(i>0){
        *(arr+i) = *(arr+i-1);
        i--;
    } 
}
void insertion_sort(int* arr , int len){
    int save = 0;
    int count = 0;
    for (int i = 1; i < len; i++)
    {
        save = *(arr+i);
        int j = i-1;
        while((j>=0)&&(*(arr+j) > save)){
        count++;
        j-= 1;
        }
        if(count >0) shift_element(arr+j+1, count);
        count = 0;
        *(arr+j+1) = save;
    }
    
}
