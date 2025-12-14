#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
    FILE* fptr = fopen("./error_handling/test.txt","w");
    if(fptr==NULL){printf("write error"); return 1;}
    fprintf(fptr,"hello world");
    fclose(fptr);
    fptr = fopen("./error_handling/test.txt","r");
    if(fptr==NULL){printf("read error"); return 1;}
    char buffer[100];
    fgets(buffer,sizeof(buffer),fptr);
    printf("file content : %s\n",buffer);
    printf("file reading error No : %d\n",errno);
    printf("file reading error str: %s\n",strerror(errno));
    fclose(fptr);
    printf("\n");
    return 0;
}