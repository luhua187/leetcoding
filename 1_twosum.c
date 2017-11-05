/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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

int* twoSum(int* nums, int numsSize, int target) 
{
    int  *p = (int *)malloc(2*4);
    int left ,  right;
    int i, tmp, j, t;
    int *pp = (int *)malloc(numsSize*4);

    p[0] = -1, p[1] = -1;
    memcpy(pp, nums, numsSize*4);
    quiksort(pp, 0, numsSize-1);
 
    for(i = 0; i < numsSize; i++)
    {
    	tmp = target - pp[i];
    	for(j = numsSize-1; j > i; j--)
    	{
    		if(pp[j] < tmp)
    			break;
    		if(pp[j] == tmp)
    			goto end;
    	}
    }
    end:
    	for(j = 0; j < numsSize; j++)
    	{
    		if(pp[i] == nums[j] )
    		{
    			p[0] = j;
    			break;
    		}
    	}
    	for(t = numsSize-1; t >=0; t--)
    	{
    		if(tmp == nums[t])
    		{
    			if(t < j)
    			{	
    				p[0] = t;
    				p[1] = j;
    			}
                else
                    p[1] = t;
    			break;
    		}

    	}
   	free(pp);
    return p;
}