#include<stdio.h>

int main(int *args,char *kwargs[]){
    char str[] = "Harish";
    char scanf_line[20];
    char scanf_str[20];
    printf("%s\n",str);
    // printf("Enter string for the scanf: ");
    // scanf("%s",scanf_str);
    // // print the scanf string 
    // printf("%s\n",scanf_str);
    printf("Enter string line with spaces for the scanf: ");
    // this will take entire line till the new line including spaces
    scanf("%[^\n]s", scanf_line);

    // Printing the read string
    printf("%s", scanf_line);

    return 0;
}