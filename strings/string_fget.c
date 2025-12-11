#include <stdio.h>
int printfunc(char str[]){
    printf("%s\n",str);
    return 0;
}
int main() {
    char str[20];
    char str2[20];

    // Reading the string 
    // (with spaces) using fgets
    fgets(str, 20, stdin);

    // Displaying the string using puts
    printf("%s", str);
    fgets(str2, 20, stdin);

    // Displaying the string using puts
    printfunc(str2);
    return 0;
}