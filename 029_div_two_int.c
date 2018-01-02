#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int divide(int dividend, int divisor) 
{  
    if (dividend == 0 || divisor == 0) return 0;  
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;  
    if (divisor == 1) return dividend;

    long long a = dividend;
    long long b = divisor;
    long long c ; 
    int i;
    
    a = a > 0? a:-a;  
    b = b > 0? b:-b; 

    long long ret = 0;  
    while (a >= b) 
    {  
        c  = b;  
        for (i = 0; a >= c; ++i, c <<= 1) 
        {  

            a -= c;  
            ret += 1 << i;  

        }  
    }  
    return ((dividend^divisor)>>31) ? (int)(-ret) : (int)(ret);  
}  



int main()
{
    int a = -2147483648;
    int b = 2;
    int c;

    c = divide(a, b);
    printf("T=== %d \n", c);
}

