#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int* data;
    size_t count;
}Array;
Array* fibanocci() {
    Array* arr = malloc(sizeof(Array));
    if (!arr) return NULL;

    arr->count = 10;
    arr->data = calloc(arr->count, sizeof(int));
    if (!arr->data) {
        arr->count = 0;
        free(arr);
        return NULL;
    }

    arr->data[0] = 0;
    arr->data[1] = 1;
    for (size_t i = 2; i < arr->count; i++) {
        arr->data[i] = arr->data[i-1] + arr->data[i-2];
    }
    return arr;
}

int main() {
    Array* arr = fibanocci();
    if (!arr || !arr->data) return 1;

    for (size_t i = 0; i < arr->count; i++) {
        printf("%d\n", arr->data[i]);
    }

    free(arr->data);
    free(arr);
    return 0;
}
