#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int myAtoi(char* str) 
{
    int n = strlen(str);
    long long sum = 0;
    int flag = 1, i = 0;

    while(str[i] == ' ')
        i++;
    if(str[i] == '-')
    {
        flag = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }

    for(; i < n; i++)
    {
        if(str[i] < '0' || str[i] > '9')
            break;

        sum = sum*10 + (str[i] - '0');

        if(flag == 1 && sum > INT_MAX)
        {
            return INT_MAX;
        }
        else if(flag == -1 && -1*sum < INT_MIN)
        {
                return INT_MIN;
        }
    }

    return (int)flag * sum;
}
int main()
{

    int  n;
    char s[1000];
    while(1)
    {
        scanf("%s", s);
        n =myAtoi(s);
        printf("%d \n", n);
    }

    return 0;
}