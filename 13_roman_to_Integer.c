#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int romanToInt(char* s)
{
	int ss[92], n, i, sum;
	ss['I']= 1,ss['X']=10,ss['C']=100;
	ss['M']=1000,ss['V']=5,ss['L']=50,ss['D']=500;
	n = strlen(s);

	sum = ss[s[0]];
	for(i = 1; i < n; i++)
		if(ss[s[i]] > ss[s[i-1]])
			sum = sum + ss[s[i]] - 2*ss[s[i-1]];
		else
			sum += ss[s[i]];

	return sum;
}

int main()
{

	char s[1000];
	int  n;
	while(1)
	{
		scanf("%s", s);
		n =romanToInt(s);
		printf("%d \n", n);
	}

	return 0;
}
