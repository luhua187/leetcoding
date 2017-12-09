#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int reverse(int x)
{
	char str[33] = {0};;
	long long rv = 0;
	int n = 0, t = 0, i;

	n = sprintf(str, "%d", x);
	if(str[0] == '-')
		t = 1;
	
	for(i = n-1; i >= t; i--)
		rv = rv*10 + str[i]-'0';

	if(t)
		rv = -rv;

	if(rv > INT_MAX || rv < INT_MIN)
		return 0;
	else
		return rv;
}


int main()
{

	long long rv =0;
	while(1)
	{
		scanf("%lld", &rv);
		rv = reverse(rv);
		printf("ans = %lld \n", rv);
	}

	return 0;
}