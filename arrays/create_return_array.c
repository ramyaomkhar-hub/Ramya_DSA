#include<stdio.h>
#include<stdlib.h>

int *creareArray(int size){
    int *array = (int*)malloc(size*sizeof(int)); // create the memory
    for(int i = 0; i<size;i++){
        *(array+i) = (i+1)*2; // assign the values 
    }

    return array;
}

int main(int *args,char *kwargs[]){

    int size = 10;
    int *myarray = creareArray(size);
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\n",*(myarray+i));
    }
    free(myarray); // release
    return 0;

}