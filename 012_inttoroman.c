#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* intToRoman(int num)
{
	char *s[13] ={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int   val[13] = {1000,900,500,400, 100, 90,  50, 40,  10, 9,   5,  4,   1};
	int i, len = 0;
	char *ss = (char *)malloc(36);
	for(i = 0; num!=0; i++)
	{
		while(num >= val[i])
		{
			len += sprintf(ss+len, "%s", s[i]);
			num -= val[i];
		}
	}
	return ss;
}

int main()
{

	char *s;
	int  n;
	while(1)
	{
		scanf("%d", &n);
		s =intToRoman(n);
		printf("%s \n", s);
	}

	return 0;
}