#include<stdio.h>
int sum(int *p,int rows, int cols){
    printf("sum function pointer %d \n",p); // pointer address or the array 
    printf("test element address %d : value  %d \n",p+1,*p+1); // p+1 is increment of the pionter address by 4 bytes and *p+1 => first rows second element = 2
    int n = rows*cols;
    int sum = 0;
    for( int i = 0; i <n; i++){
        sum += *(p+i);
    }
    return sum;
}
int main(){
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8},
                     {9, 10, 11, 12} };
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);
    printf("rows %d , cols %d\n",rows,cols); // print rows and cols 
    printf("array arr addess %d\n",arr); // array pointer address whihc is same as &arr[0][0]
    printf("sum : %d\n",sum(&arr[0][0],rows,cols)); // pass the address of the array first element 
    return 0;
} 