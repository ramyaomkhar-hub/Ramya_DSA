#include<stdio.h>
#include<stdlib.h>

int main(){
    int memoryblock_size = 10;
    int* ptr = (int *) malloc(sizeof(int)*memoryblock_size);
    for (size_t i = 0; i < memoryblock_size; i++)
    {
        printf("memory index %d : value %d\n",i,*(ptr+i));
    }
    
    printf("\n");
    return 0;
}