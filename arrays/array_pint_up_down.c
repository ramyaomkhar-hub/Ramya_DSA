#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    // print array up 
    int n = sizeof(arr)/sizeof(arr[0]); // compute the numder of elements in the array 
    printf("Print array elements in forward \n");
    for (int i=0; i< n; i++){
        printf("%d\n",*arr+i);
    }
    printf("Print array elements in reverse \n");
    for (int i=n-1; i>=0; i--){
        printf("%d\n",*arr+i);
    }
    
    return 0;
}