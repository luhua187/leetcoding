#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    int t = (nums1Size + nums2Size);
    int key = t/2 + 1;
    int p[key];
    int i = 0,  m = 0, n = 0;

    while(m < nums1Size && n < nums2Size && i < key)
    {
    	if(nums1[m] < nums2[n])
    		p[i++] = nums1[m++];
    	else
    		p[i++] = nums2[n++];
    }
    while(i < key && m < nums1Size)
    	p[i++] = nums1[m++];
    while(i < key && n < nums2Size)
    	p[i++] = nums2[n++];

    if(t%2 == 0)
    	return (p[t/2-1]+p[t/2])/2.0;
    else
    	return p[t/2]*1.0;
}

int main()
{
	double c;
	int a[] = {1,2};
	int b[] = {3,4};

	c = findMedianSortedArrays(a, 2, b,2);
	printf("%f \n", c);
	return 0;
}
