void generate(char **s,  int *size, int l, int  r, char *tmp, int index)
{
	if(l == 0 && r == 0)
	{
		tmp[index] = 0;
		s[*size] = (char *)malloc(index);
		strcpy(s[*size], tmp);
		(*size)++;
		return ;
	}

	if(l > 0)
	{
		tmp[index] = '(';
		generate(s, size, l-1, r, tmp, index+1);
	}
	if(r > 0 && l < r)
	{
		tmp[index] = ')';
		generate(s, size, l, r-1, tmp, index+1);
	}

}

char** generateParenthesis(int n, int *returnSize)
{
	int *s = (char **)malloc(20000);
	char *tmp = (char *)malloc(2*n + 1);
	int l = n, r = n;

	*returnSize = 0;
	generate(s, returnSize, l, r, tmp, 0);

	return s;
}
