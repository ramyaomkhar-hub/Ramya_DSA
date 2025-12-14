#include <stdio.h>

// Uninitialized variable stored in bss
int global;
int main() {
  
  	// Uninitialized static variable stored in bss
    static int i;
    static int j;
    return 0;
}