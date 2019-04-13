/*
7. Reverse Integer
Given a 32-bit signed integer, reverse digits of an integer.
Note:
	Assume we are dealing with an environment which could only store integers 
within the 32-bit signed integer range: [−2^31,  2^31 − 1]. 
For the purpose of this problem, assume that your function returns 0 
when the reversed integer overflows.
Example 1:
	Input: 123,Output: 321
	Input: -123,Output: -321
	Input: 120,Output: 21
*/
#include <stdio.h>

int reverse(int x);
int power(int number);

int main()
{
	int number,answer;

	printf("Please input a nagetive or positive number.\n");
	answer = reverse(number);
	printf("The reverse integer is %d\n", answer);
	return 0;
}

int reverse(int x) 
{
    int num_Old = 0;
	int num_New = 0;
	int tem_Old[10],tem_New[10];
	int i = 0,j=0;//i 表示数字的个数

	num_Old = x;
	scanf("%d",&num_Old);
	// if(num_Old >= 0) //为正数
	// {
		//取出每位数字
		while (num_Old != 0)
		{
			tem_Old[i] = num_Old % 10;//得到个位数字
			num_Old = num_Old / 10;//去掉个位数字
			i++;
		}
		//reverse,i 表示数字的个数
		while (i != 0)
		{
			if(tem_Old[i-1] == 0)
			{
				i--;//如果最后的数字为零,反转时去掉
				continue;
			}
			tem_New[j] = tem_Old[i-1] * power(j);		
			num_New += tem_New[j];
			i--;
			j++;
		}
		return num_New;
	// }
	/*
	else //reverse后为负数
	{
		return 0;
	}
	*/
}

int power(int num_Place) //number表示乘10的次数
{
	int i,result = 1;
	for(i = 1;i <= num_Place;i++)
	{
		if (num_Place == 0)
			return 1;
		result *= 10;
	}
	return result;
}




