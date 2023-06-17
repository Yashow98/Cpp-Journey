#include <iostream>
#include <cstdio>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    for (size_t i = 0; i < len; ++i)
    {
        printf("%.2x", start[i]);
    }
    std::cout << std::endl;
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void* x)
{
    show_bytes((byte_pointer) &x, sizeof(void*));
}

void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float) ival;
    int* pval = &ival;
    show_int(ival);     // 4bytes
    show_float(fval);   // 4bytes
    show_pointer(pval); // 8bytes
}

int main()
{
    test_show_bytes(12345);

    return 0;
}