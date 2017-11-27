#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {  
    char* str =s trs[0];  
    int i,j;  
    if(strsSize == 0)
    	return "";  
    for(i=1;i<strsSize;i++)
    {  
        j=0;  
        while(str[j] && strs[i][j] && str[j]==strs[i][j])
        	j++;  
        str[j]=0;  
    }  
    return str;  
}
