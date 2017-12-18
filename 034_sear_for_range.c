#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int search(int *a,int l, int r, int value)
{  
    int low = l, high = r, mid;  
    while (low <= high) 
    {  
        mid = (low + high)/2;  
        if (value > a[mid]) 
        {  
            low = mid+1;  
        }
        else if (value < a[mid])
        {  
            high = mid - 1;  
        }
        else
        {  
            return mid;  
        }  
    } 

    return -1;  
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) 
{
    int n,m,i;
    int *p = (int *)malloc(2*4);
    *returnSize = 2;

    m = search(nums, 0, numsSize-1, target);
    if(m == -1)
    {
        p[0] = -1, p[1] = -1;
        return p;
    }
    p[0] = m, p[1] = m;
    n = m;
    while(n > 0)
    {
        n--;
        if(nums[n] != target)
            break;
        else
            p[0] = n;
    }
    while(m < numsSize-1)
    {
        m++;
        if(nums[m] != target)
            break;
        else
            p[1] = m;
    }

    return p;
}


int main()
{

    int  n, *p, i;
    int s[1000] = {5,7,7,8,8,10};

    p = searchRange(s, 6, 10, &n);

    for(i =0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");

    return 0;
}