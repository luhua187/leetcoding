#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void generate(int **s, int *nums, int *size, int *tmp, char *flag, int len, int *n)
{
	int i = 0;
    if(*n == len)
    {
        s[*size] = (int *)malloc(4 * len);
        memcpy((char *)s[*size], (char *)tmp, 4*len);
        (*size)++;
        return ;
    }

    for(i = 0; i < len; i++)
    {
        if(flag[i] == 0)
        {
        	tmp[(*n)++] = nums[i];
        	flag[i] = 1;
        	generate(s, nums, size, tmp, flag, len, n);
        	(*n)--;
        	flag[i] = 0;
      }
    }
}

int** permute(int* nums, int numsSize, int* returnSize)
{
    int *s  = (int **)malloc(20000 * 4);
    int *tmp = (int *)malloc(20000 * 4);
    char *flag = (char *)malloc(numsSize);
    int n = 0;
    memset(flag, 0, numsSize);

    *returnSize = 0;

    generate(s, nums, returnSize, tmp, flag, numsSize, &n);

    return s;
}



int main()
{
	int **s = NULL;
	int a[3] = {1,2,3};
	int t = 0, i ,j;

	s = permute(a, 3, &t);

	for(i = 0; i < t; i++)
	{	
		for(j = 0; j < 3; j++)
			printf("%d ", s[i][j]);
		printf("\n");
	}
	return 0;
}
