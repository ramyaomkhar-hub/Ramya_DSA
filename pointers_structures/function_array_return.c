#include<stdio.h>
#include<stdlib.h>
/*
    return multiples of 2 and return them from function 
*/
int* multiples(){
    int* arr = calloc(10,sizeof(int));
    if (!arr) return NULL;
    for (size_t i = 0; i < 10; i++)
    {
       arr[i] = (i+1)*2;
    }
    return arr;
}
int main(){

    int* arr = multiples();
    int i = 0;
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\n",*(arr+i));
    }
    free(arr);
    printf("\n");
    return 0;
}