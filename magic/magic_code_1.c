#include<stdio.h>
#include<stdlib.h>

int main(){
    int N=4;
    int* p;
    int* q = calloc(N,sizeof*q);
    printf("%d\n",N*sizeof*p);
    // what is the memory size allocated to the p
    printf("memory size of the p: %d bytes\n",sizeof(q)); 
    int x = 10;
    int y = 10;
    int* ptr1 = &x;
    int* ptr2 = &y;
    printf("y+++x value :%d\n",y+++x);
    printf("post x value : %d, post y value %d\n",*ptr1,*ptr2);
    printf("y++ + ++x value :%d\n",y++ + ++x);
    printf("post x value : %d, post y value %d\n",*ptr1,*ptr2);
    printf("\n");
    return 0;
}