#include<stdio.h>
#include<unistd.h>
int binarysearch(int* ptr,size_t N,int x ){
    int low = 0;
    int high = N-1;
    while (low<=high)
    {
        int mid = (high + low)/ 2;
        printf("low : %d, mid : %d, high:%d\n",low,mid,high);
        if (*(ptr+mid) == x){ printf("search element %d found @ %d\n",x,mid); return 0; }
        // else if( mid == low | mid == high){  printf("Search element %d did not found\n",x); return 1; }
        else if (*(ptr+mid) < x){ low=mid+1;  }
        else{ high = mid-1;}
    }
    printf("Search element %d did not found\n",x);
    return 1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    size_t N = sizeof(arr)/sizeof(int);
    binarysearch(arr,N,4);
    printf("\n");
    return 0;
}