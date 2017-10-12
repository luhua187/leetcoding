#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s)
{
	int i, max = 0, t = 0,left = 0;
	int table[256] = {0};
	int len = strlen(s);

	for(i = 0;i < 256; i++)
		table[i] = -1;
	for(i = 0; i < len; i++)
	{
		if(table[s[i]] != -1)
		{
			left = left < (table[s[i]]+1) ? (table[s[i]]+1):left;
		}

		table[s[i]] = i;
		t  = i - left + 1;
		max = max>t? max:t;
	}
	return max;
}



int main()
{
	char str[1024];
	int len = 0;
	while(1)
	{
		memset(str, 0, 1024);
		scanf("%s", str);
		len = lengthOfLongestSubstring(str);
		printf("len = %d \n", len);
	}
	return 0;
}