#include <stdio.h>
#include <string.h>
/*
char *longestPalindrome(char *s)
{
	int i, j;
	int len = strlen(s);
	int dp[1000][1000];

	memset(dp, 0, sizeof(dp));

	for(i = len-1, i >=0; i--)
	{
		dp[i][i] = 1;
		for(j = i+1, j < len; j++)
		{
			if(s[j] == s[i])
				dp[i][j] = dp[i+1][j-1] + 2;
			else
				dp[i][j] = dp[i][j-1]>dp[i+1][j]?dp[i][j-1]:dp[i+1][j];
		}
	}
}
*/
char *longestPalindrome(char *s)
{
	int n = strlen(s);
	int left=0,right=0, i, j, len=0;
	char dp[1000][1000];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			dp[j][i] = (s[i]==s[j] && (i-j<2 || dp[j+1][i-1]));
			if(dp[j][i] && len < i-j+1 )
			{
				len = i - j + 1;
				left  = j;
				right = i; 
			}
		}
		dp[i][i] = 1;
	}
	s[right + 1] = '\0';
	return s+left;
}


int main()
{
	char s[1000], *ss;
	while(1)
	{
		memset(s, 0, sizeof(s));
		scanf("%s", s);

		ss = longestPalindrome(s);
		printf("%s \n", ss);
	}

	return 0;
}