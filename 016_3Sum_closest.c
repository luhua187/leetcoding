#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quiksort(int *a, int left, int right)
{
	if(left >= right)
		return ;

	int i = left, j = right, key = a[left];

	while( i < j)
	{
		while(j > i && a[j] >= key)
		{
			j--;
		}
		a[i] = a[j];

		while(i < j && a[i] <= key)
		{
			i++;
		}
		a[j] = a[i];
	}

	a[i] = key;

	quiksort(a, left, i-1);
	quiksort(a, i+1, right);
}

int threeSumClosest(int* nums, int numsSize, int target) 
{
    int i, j, s, m;
    int left, right = numsSize-1;
    int closest = nums[0] + nums[1] + nums[2];
    int t = abs(closest - target);

    quiksort(nums, 0, numsSize-1);

    for(i = 0; i < numsSize-2; i++)
    {
    	left = i+1, right = numsSize-1;
    	while(left < right)
    	{
    		s = nums[i] + nums[left] + nums[right];
            m = abs(s - target);
            if(m < t)
            {
            	t = m;
            	closest =  s;
            }
            if(s < target)
            	left++;
            else
            	right--;
    	}

    }
    return closest;
}




int main()
{
	int i, r;
	//int a[] = {-7,-4,-6,6,4,-6,-9,-10,-7,5,3,-1,-5,8,-1,-2,-8,-1,5,-3,-5,4,2,-5,-4,4,7};
	int a[] = {-1,2,1,-4};

	r = threeSumClosest(a, 4, 2);
	printf("%d \n", r);
	return 0;
}
