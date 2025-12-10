#include<stdio.h>

int main(int *args, char *kwargs[]){
    int maxnumber = 0;
    int minnumber = 100000;
    int arr[] = {2,4,1,9,10,121};
    int N = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<N;i++){
        if (*(arr+i) > maxnumber){
            maxnumber = *(arr+i);
        }
        if (*(arr+i) < minnumber){
            minnumber = *(arr+i);
        }
    }
    printf("Max number :%d \t Min numebr : %d\n",maxnumber,minnumber);
    return 0;
}