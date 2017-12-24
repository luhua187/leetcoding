#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int strStr(char* haystack, char* needle) 
{
    int m= strlen(haystack);
    int n= strlen(needle);
    int i, j;
    if(m = 0 && n = 0)
    	return 0;

    for(i = 0; i < m-n+1; i++)
    {
    	for(j = 0; j < n; j++)
    	{
    		if(haystack[i + j] != needle[j])
    			break;
    	}
    	if(j == n)
    		return i;
    }
    return -1;
}

int main()
{
	char m[10] = "\0";
	char n[10] = "\0";
	int ret = 0;

	ret = strStr(m, n);

	printf("ret = %d\n", ret);

	return 0;
}
