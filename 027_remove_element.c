#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) 
{
    int i, n = 0;

    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] == val)
            continue;
        else
        {
            nums[n++] = nums[i];
        }
    }
    return n;
}



int main()
{

    int  n, i;
    int s[1000] = {3,3,3,3};
    while(1)
    {
    	scanf("%d", &n);
        n = removeElement(s, 4, 3);
        for(i =0; i < n; i++)
            printf("%d ", s[i]);
        printf("\n");

    }
    return 0;
}