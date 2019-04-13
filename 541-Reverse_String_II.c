#include <stdio.h>
#include <string.h>

char* reverseStr(char* s, int k) ;

int main(void)
{
    char *s, *d;
    int k;

    printf("Please input the string of s: ");
    scanf("%s", s);
    printf("Please input k: ");
    scanf("%d", &k);
    d = reverseStr(s, k);
    printf("The result is %s\n", d);

    return 0;
}


char* reverseStr(char* s, int k) 
{
    int block, i, ja,jb;
    char ch;//temporary variation in order to swap two variation 

    //block stand for the number of all blocks, including the final block
    block = (int)strlen(s) / (2 * k) + 1;
    //For top block - 1, the first k reverse all of them, 
    //left the k to 2k as original
    //outer layer stand all the number of blocks
    for(i = 0; i <= block - 1; i++)
    {
        if(block == 1 || i == block - 1)//judge whether is the finally block
        {
            if(strlen(s) % (2 * k) < k)//judge whether the finally block less than k
                jb = i * 2 * k + strlen(s) % (2 * k) - 1;//less than k
            else
                jb = i * 2 * k + k - 1;//more than or is equal to k
        }
        else
            jb = i * 2 * k + k - 1;//else block
        
        for(ja = i * 2 * k; ja < jb; ja++, jb--)//inner layer stand each block
        {
            //swap two chars
            ch = s[ja];
            s[ja] = s[jb];
            s[jb] = ch;
        }
    }
    
    return s;
}






