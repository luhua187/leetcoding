#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target)
{
	int i;

	for(i = 0; i < numsSize; i++)
	{
		if(nums[i] < target)
			continue;
		else
			return i;
	}
    return i;
}



int main()
{
	int t[100] = {1,3,5,6};
	int n, a, i;

	n = searchInsert(t, 4, 7);
	printf("%d \n", n);


	return 0;
}
