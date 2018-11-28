/*
1.Knowleage:
	(1).pointer how use '\n' an p++ to visit string.
	(2).use of scanf
		char J[50], S[50];
		scanf("%s%s", J, S);

2.Problem Description:
771. Jewels and Stones
You're given strings J representing the types of stones that are jewels, 
and S representing the stones you have. Each character in S is a type of stone you have.  
You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:
S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/
#include<stdio.h>
#include<string.h>

int numJewelsInStones(char* J, char* S);

int main(void)
{
	char J[50], S[50];
	int counter;

	scanf("%s%s", J, S);
	counter = numJewelsInStones(J, S);
	printf("%d\n", counter);

	return 0;
}


int numJewelsInStones(char* J, char* S) 
{
	int counter = 0;
	char *Jp = J;
	//pointer "\0" and p++
	
	while( *S != '\0' )
	{
		while( *Jp != '\0' )
		{
			if( *S == *Jp)
			{
				counter++;
				break;
			}
            Jp++;
        }
        
		Jp = J;//init Jp to J
        S++;
	}
	
	
	return counter;
}
