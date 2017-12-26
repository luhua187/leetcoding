#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int bool;

bool isValidSudoku(char** board, int boardRowSize, int boardColSize) 
{
    unsigned int row[10], col[10], n[3][3];
    unsigned int  i,  j, m;

    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));
    memset(n,   0, 9*4);

    for(i = 0; i < boardRowSize; i++)
    	for(j = 0; j < boardColSize; j++)
   	{
   		if(board[i][j] != '.')
   		{
   			m = board[i][j]-48;
   			if( (row[i] & (1<<m)) == 0  && (col[j] & (1<<m)) == 0 )
   			{
   				row[i] = row[i] | (1<<m);
   				col[j] = col[j] | (1<<m);
   			}
   			else 
   				return 0;

   			if( (n[i/3][j/3] & (1<<m)) ==  0)
   				n[i/3][j/3] = n[i/3][j/3] | (1<<m);
   			else 
   			{
   				return 0;
   			}	
   		}
   	}
 	
 	return 1;	                          
}

int main()
{
	char *s[9] = 
	{
		"....5..1.",
		".4.3.....",
		".....3..1",
		"8......2.",
		"..2.7....",
		".15......",
		".....2...",
		".2.9.....",
		"..4......"
	};
	int t;
	t = isValidSudoku(s, 9, 9);

	printf("vlaue = %d\n",  t);
	return 0;
}
