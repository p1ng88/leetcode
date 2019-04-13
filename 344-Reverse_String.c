#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* reverseString(char* s);
#define MAX_LEN 10
int main(void)
{
	char s[] = "race a car", *d;
	// printf("Please input a source string:\n");
	// scanf("%s",s);
	d = reverseString(s);
	printf("%s\n", d);

	return 0;
}

char* reverseString(char* s) 
{
    int string_lenth = strlen(s);
    char *d, *dp;//point start of d, dp is variable pointer

    d = (char *) malloc (string_lenth + 1) ;
    dp = d;//pointer d store it's position
    s = s + string_lenth - 1;//point end of s
    while(*dp == '\0')
    {   
    	*dp = *s;
    	dp++;
    	s--;
        // (*dp)++ = (*s)--;
    }
    
    return d;
}



