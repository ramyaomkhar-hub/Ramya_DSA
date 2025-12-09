#include <stdio.h>

int main() {
    char arr[10] = {'R', 'A', 'M', 'Y', '\0'};  // Fixed: proper initialization
    printf("Hello, World!....................\n");
    printf("Name: %s\n", arr);  // Print the array
    return 0;
}
