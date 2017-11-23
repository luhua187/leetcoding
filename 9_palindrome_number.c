#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define bool int

bool isPalindrome(int x)
{
	int n, i=0;
	char s[32];
	n = sprintf(s, "%d", x);

	for(i = 0; i < n/2; i++)
	{
		if(s[i] == s[n-1-i])
			continue;
		else
			return 0;
	}
	return 1;
}

int main()
{

	int  n;
	while(1)
	{
		scanf("%d", &n);
		n =isPalindrome(n);
		printf("%d \n", n);
	}

	return 0;
}
