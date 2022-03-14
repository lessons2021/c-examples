#include <iostream>
#include <stdio.h>
//int a=10;
//bool g_b = true;
//00000101
//00000110
//00000011
extern int a;
int b = 78;
bool c = true;
long b1 = 78;
char c1 = 'A';
int b2 = 82;
int main() {
    int a = 66;
    int j = 6;
    int k = i & j;
    std::cout << k << std::endl;
    k = i | j;
    std::cout << k << std::endl;
    k = i ^ j;
    std::cout << k << std::endl;
    int b = 67;
    std::cout << a << " : " << &a << std::endl;
    std::cout << b << " : " << &b << std::endl;
    std::cout << ::b << " : " << &(::b) << std::endl;
    std::cout << ::c << " : " << &c << std::endl;
    std::cout << ::b1 << " : " << &(::b1) << std::endl;
    printf("%c  : %p\n", c1, &c1);
    std::cout << ::b2 << " : " << &(::b2) << std::endl;
    std::cout << sizeof(char*) << std::endl;
    return 0;
}
