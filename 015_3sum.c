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


int** threeSum(int* nums, int numsSize, int* returnSize)
{
	int i, j, s, r, t = 0;
	int **p = (int **)malloc(sizeof(int*) * 50000);

	quiksort(nums, 0, numsSize-1);

	for(i = 0; i < numsSize && nums[i] <= 0; i++)
	{
		if(i > 0 && nums[i] == nums[i-1])
			continue;

		for(j = i+1; j < numsSize; j++)
		{
			if(j > i+1 && nums[j] == nums[j-1])
				continue;
			s = 0 - nums[i] - nums[j];
			r = search(nums, j+1, numsSize-1, s);
			if(r != -1)
			{
				p[t]    = (int *)malloc(sizeof(int) * 3);
				p[t][0] = nums[i];
				p[t][1] = nums[j];
				p[t][2] = nums[r];
				t++;
				//printf("%d %d %d\n", nums[i], nums[j],nums[r]);
			}

		}
	}

	*returnSize = t;
    return p;
}

int main()
{
	int i, r;
	//int a[] = {-7,-4,-6,6,4,-6,-9,-10,-7,5,3,-1,-5,8,-1,-2,-8,-1,5,-3,-5,4,2,-5,-4,4,7};
	int a[] = {0,0,0};

	threeSum(a, 3, &r);

	return 0;
}
