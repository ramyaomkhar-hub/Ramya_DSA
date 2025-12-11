#include<stdio.h>
int sum(int arr[],int N){
    int S =0;
    for (int i = 0; i < N; i++)
    {
        S += arr[i];
    }
    
    return S;
}
int mul(int* arr,int N){
    int S =1;
    for (int i = 0; i < N; i++)
    {

        S *= *arr+i ;
    }
    
    return S;
}
int main(){
    // // non homo items allcated but memory dose not throw error because memory type is same 
    // int arr[3] = {10.1,13,15}; // #Warning : for 10.1 it will allocate 10 , compiler will remove .1 automatically becuase float and int has same meory size 4bytes
    // // non homo items allcated but memory dose not throw error because memory type is same 
    // int arr[3] = {10.1,13,15,'c'}; // compiler throw an error becuase compiler will allocate 4bytes for each element in the array 
    // but your giving 'c' , a charecter which is only 1byte; compiler will see this as memory voilation.
    int arr[3] = {10,12,15};
    printf("Address of the array first element, %d\n",arr);// what do you expect ? it will print address 768986740
    printf("Address of the array second element, %d\n",arr+1);// what do you expect ? 768986744 ; since the memory type is int , it memory will increase 4bytes 
    // pointers and array are very close 
    printf("value of the array first element, %d\n",*(arr+0));// array pointer 
    printf("value of the array second element, %d\n",*(arr+1));
    printf("value of the array second element, %d\n",*(arr+2));
    /// how to know the number of elements in the array 
    printf("Total size of the memory :%d\n",sizeof(arr)); // 4bytes * 3 elements = 12bytes of total memory
    // how to know the number of elements in the array 
    // total size / type size => number elements }-> 4bytes * 3 elements/ 4bytes => 3 elements
    int N = sizeof(arr)/sizeof(int);
    printf("Number of elements in the array : %d\n",N); 
    // print all the array values with tab space with array index 
    printf("Print array values with array index method\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t",arr[i]); 
        /* code */
    }
    printf("\n");
    // print all the array values with tab space with pointer index 
    printf("Print array values with pointer index method\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t",*(arr+i)); 
        /* code */
    }
    printf("\n");

    printf("Sum of the array : %d\n",sum(arr,N));
    // printf("Sum of the array : %d",sum(&arr[0],N)); // both are same methods 
    printf("Multiplication of the array : %d\n",mul(arr,N));

    printf("\n");
    return 0;
}