#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) 
{
    int i, m, n=0;

    m = 9999999999;
    for(i = 0; i < numsSize; i++)
    {
    	if(nums[i] == m)
    	{
    		continue;
    	}
    	else
    	{
    		nums[n++] = nums[i];
    		m = nums[i];
    	}
    }
    return n;
}



int main()
{

    int  n;
    int s[1000] = {1,2};
    while(1)
    {
    	scanf("%d", &n);
        n = removeDuplicates(s, 2);
        printf("%d \n", n);
    }
    return 0;
}