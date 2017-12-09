#include <stdio.h>
#include <string.h>

#define bool int

bool isValid(char* s) 
{
	char t[50000];
	int m = 0, i;
	memset(t, 0, sizeof(t));

	for(i = 0; i < strlen(s); i++)
	{
		switch(s[i])
		{
			case '(':
			case '{':
			case '[':
				t[m++] = s[i];
				break;
			case ')':
				if(m == 0)
					return 0;
				else
				{
					if(t[--m] == '(')
						t[m] = 0;
					else
						return 0;
				}
				break;
			case '}':
			if(m == 0)
					return 0;
				else
				{
					if(t[--m] == '{')
						t[m] = 0;
					else
						return 0;
				}
				break;
			case ']':
			if(m == 0)
					return 0;
				else
				{
					if(t[--m] == '[')
						t[m] = 0;
					else
						return 0;
				}
				break;
		}
	}

	if(t[0] == 0)
		return 1;
	else
		return 0;   
}


int main()
{
	char str[1024];
	int len = 0;
	while(1)
	{
		memset(str, 0, 1024);
		scanf("%s", str);
		len = isValid(str);
		printf("len = %d \n", len);
	}
	return 0;
}
