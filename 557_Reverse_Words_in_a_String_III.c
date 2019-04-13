#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char* reverseWords(char* s);

int main(void)
{
	char * s = "Let's take LeetCode contest";

	printf("%s\n", reverseWords(s));

	return 0;
}

char* reverseWords(char* s) 
{   
    int word_Start, word_End, current_Position, i, j;
    char tem;
    char * d = (char *) malloc (strlen(s) + 1);

    //convert from "char *"  to char[]
    for(i = 0; i <= strlen(s) - 1; i++)
    {
    	d[i] = *(s + i);
    }

    word_Start = 0;
    
    for(current_Position = 0; current_Position <= strlen(s) - 1; current_Position++)
    //find the start and end of each word within a sentence
    {
    	//continue judge
        if (d[current_Position] ==  ' ')
        {
        	word_End = current_Position - 1;
        }
        else if (current_Position == strlen(s) - 1)
        {
        	word_End = current_Position;
        }
        else
        {
        	continue;
        }
            

        for(i = word_Start, j = word_End; i < j; i++, j--)
        //reverse in each Words
        {
        	//swap two characters
            tem = d[i];
            d[i] = d[j];
            d[j] = tem;
        }

        word_Start = current_Position + 1; //next start of word 
    }
    d[strlen(d) - 3] = '\0';

    return d;
}
