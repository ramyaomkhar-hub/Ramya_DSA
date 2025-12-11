#include<stdio.h>
int add(int a , int b){
    return a + b ;
}

int sub(int a, int b ){
    return a - b ;
}

float calc (int a , int b , int ( *addptr)(int,int),int (*subptr)(int,int)){
    float value = 0.0;
    if ( a != b){
        value = addptr(a,b)/subptr(a,b);
    }
    return value;
}

int main(){
    // declare function pointer 
    int (*fptr)(int,int)= &add;

    // print the value from the function 
    printf("add function pointer call %d\n",fptr(2,3));
    int var = 10;
    int* ptr1 = &var; // single pointer 
    int** ptr2 = &ptr1; // double pointer 
    printf("Var value var : %d\n",var);
    printf("single pointer *ptr1 : %d\n",*ptr1);
    printf("duble pointer **ptr2 : %d\n",**ptr2);
    // nested loops 
    int a = 15;
    int b = 4;
    printf("Nested calc vlaue %1.2f",calc(a,b,add,sub));
    printf("\n");
    return 0;
}