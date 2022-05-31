#include <stdio.h>


void foo(unsigned int n, unsigned int m) {
    unsigned int a,b; // always a <= b
    a = (n < m)? n : m;
    b = (n < m)? m : n;
    
    printf("Input: N = %u, M = %u\r\n", n, m);
    printf("Output: ");
    while (a >= 1) {
        while (b >= a) {
            printf("%dx%d", a, a);
            b = b - a;
            if (b) 
                printf(", ");
        }
        {
            unsigned int t = a; 
            a = b; 
            b = t;
        }
    }
    printf("\r\n");
    
}

int main()
{
    printf("Hello World");
    
    foo(6,5);
    foo(1,1);
    foo(9,9);
    foo(2500,171);

    return 0;
}
