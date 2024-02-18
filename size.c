#include <stdio.h>
#include <limits.h>

#define COLA 20
#define COLB 6
#define COLC 22

void print(char* type, int size, long long min, unsigned long long max)
{
    printf("%-*s%-*d%-*lld%-20llu\n", COLA, type, COLB, size, COLC, min, max);
}

int main(void)
{
    printf("%-*s%-*s%-*s%-20s\n", COLA, "TYPE", COLB, "SIZE", COLC, "MIN", "MAX");
    print("char", sizeof(char), CHAR_MIN, CHAR_MAX);
    print("usigned char", sizeof(unsigned char), 0, UCHAR_MAX);
    print("unsigned short", sizeof(unsigned short), 0, USHRT_MAX);
    print("short", sizeof(short), SHRT_MIN, SHRT_MAX);
    print("unsigned int", sizeof(unsigned int), 0, UINT_MAX);
    print("int", sizeof(int), INT_MIN, INT_MAX);
    print("unsigned long", sizeof(unsigned long), 0, ULONG_MAX);
    print("long", sizeof(long), LONG_MIN, LONG_MAX);
    print("unsigned long long", sizeof(unsigned long long), 0, ULLONG_MAX);
    print("long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("\n");
    print("char*", sizeof(char*), 0, 0);
    print("int*", sizeof(int*), 0, 0);
    print("long*", sizeof(long*), 0, 0);
    print("long long*", sizeof(long long*), 0, 0);
    return 0;
}
