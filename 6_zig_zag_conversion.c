#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *convert(char *s, int numRows)
{
	int len = strlen(s);
	int key = numRows*2-2, step = 0;
	int i, j , a, b;
	char ss[1024][1024];
	memset(ss, 0, sizeof(ss));

	if(numRows == 1)
		return s;

	for(i = 0; i < len; i++)
	{
		a = i/key;
		b = i%key;
		if(b < numRows)
			ss[b][ a*(numRows-1)] = s[i];
		else
			ss[2*numRows-b-2][a*(numRows-1)+b-numRows +1] = s[i];
	}
	for(i = 0; i < numRows; i++)
		for(j = 0; j < 1024; j++)
			if(ss[i][j] != 0)
				s[step++] = ss[i][j];
	return s;
}

int main()
{

	char s[1000], *ss, n;
	while(1)
	{
		memset(s, 0, sizeof(s));
		scanf("%s", s);
		ss =convert(s, 3);
		printf("%s\n", ss);
	}

	return 0;
}
