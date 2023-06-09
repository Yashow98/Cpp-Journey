#include <iostream>
#include <cstdio>
#include <cstring>

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
    // test_show_bytes(12345);
    // int val = 0x87654321;
    // byte_pointer valp = (byte_pointer) &val;
    // show_bytes(valp, 1);  // 小端法表示机器
    // show_bytes(valp, 2);
    // show_bytes(valp, 3);

    const char* s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));
    // show_bytes((byte_pointer) s, 7);

    return 0;
}