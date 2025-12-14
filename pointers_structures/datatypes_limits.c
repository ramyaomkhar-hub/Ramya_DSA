#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
Integer types:
char: -128 to 127
unsigned char: 0 to 255
short: -32768 to 32767
unsigned short: 0 to 65535
int: -2147483648 to 2147483647
unsigned int: 0 to 4294967295
long: -9223372036854775808 to 9223372036854775807
unsigned long: 0 to 18446744073709551615
long long: -9223372036854775808 to 9223372036854775807
unsigned long long: 0 to 18446744073709551615

Floating point types:
float: -3.402823e+38 to 3.402823e+38
double: -1.797693e+308 to 1.797693e+308
long double: -1.189731e+4932 to 1.189731e+4932
*/

/*
| Type          | Specifier | Example                      | Output    |
| ------------- | --------- | ---------------------------- | --------- |
| int           | %d / %i   | printf("%d", 42);            | 42        |
| unsigned int  | %u        | printf("%u", 42u);           | 42        |
| long          | %ld       | printf("%ld", 42L);          | 42        |
| unsigned long | %lu       | printf("%lu", 42UL);         | 42        |
| long long     | %lld      | printf("%lld", 42LL);        | 42        |
| char          | %c        | printf("%c", 'A');           | A         |
| string        | %s        | printf("%s", "hello");       | hello     |
| float         | %f        | printf("%f", 3.14f);         | 3.140000  |
| double        | %lf       | printf("%lf", 3.14);         | 3.140000  |
| pointer       | %p        | printf("%p", ptr);           | 0x7ffd... |
| hex           | %x / %X   | printf("%x", 255);           | ff / FF   |
| octal         | %o        | printf("%o", 8);             | 10        |
| size_t        | %zu       | printf("%zu", strlen("hi")); | 2         |
*/
int main() {
    printf("Integer types:\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: 0 to %llu\n", ULLONG_MAX);
    
    printf("\nFloating point types:\n");
    printf("float: %e to %e\n", -FLT_MAX, FLT_MAX);
    printf("double: %e to %e\n", -DBL_MAX, DBL_MAX);
    printf("long double: %Le to %Le\n", -LDBL_MAX, LDBL_MAX);
    
    return 0;
}
