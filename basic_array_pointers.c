#include <stdio.h>

int addition(int *p, int rows, int cols) {
    int sum = 0;
    int total = rows * cols;

    for (int i = 0; i < total; i++) {
        sum += p[i];            // same as *(p + i)
    }
    return sum;
}

int main(void) {
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int arr_t[3] = {1,2,3};

    int rows = sizeof(arr) / sizeof(arr[0]);        // 3
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);  // 3
    printf("arr %d\n",arr); // show the address of the 2D array
    printf("*arr %d\n",*arr); // show the address of the 2D array
    printf("&arr %d\n",&arr); // show the address of the 2D array
    printf("arr_t %d\n",arr_t); // show the address of the address of 1D array
    printf("*arr_t %d\n",*arr_t); // show the address of the value of the arr_t[0]  1D array
    printf("&arr_t %d\n",&arr_t); // show the address of the address of the 1D array

    printf("rows %d : cols %d \n", rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("\t%d", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("matrix addition : %d\n", addition(&arr[0][0], rows, cols));
    return 0;
}
