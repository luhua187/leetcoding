#include <stdio.h>
/*       ^_^   ^_^          */
int search(int* nums, int numsSize, int target) 
{
    int i;
    for(i = 0; i < numsSize; i++)
        if(nums[i] == target)
            return i;
    
    return -1;
}

