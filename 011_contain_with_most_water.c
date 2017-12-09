#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maxArea(int* height, int heightSize)
{
	int left = 0, right = heightSize-1;
	int area = 0,t=0, s;

	while(left < right)
	{
		s = height[left] > height[right]? height[right]:height[left];
		t = s*(right - left);
		area = area > t? area : t;

		if(height[left] < height[right])
			left++;
		else
			right--;
	}
    return area;
}

int main()
{
	int s[1000];
	int  n, i;
	while(1)
	{
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf ("%d", &s[i]);
		n =maxArea(s, n);
		printf("%d \n", n);
	}

	return 0;
}