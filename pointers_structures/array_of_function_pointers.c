#include<stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a , int b){
    return a*b;
}
int div(int a , int b){
    return a/b;
}

int main(){
    int a = 5; int b = 2;
    int (*fptr[])(int,int) = {add,sub,mul,div};
    printf("********** Array of function pointers ***********\n");
    printf("addition : %d \n",fptr[0](a,b));
    printf("subtraction : %d \n",fptr[1](a,b));
    printf("multiplication : %d \n",fptr[2](a,b));
    printf("divition : %d \n",fptr[3](a,b));
    printf("\n");
    return 0;
}