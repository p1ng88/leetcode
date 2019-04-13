//
// Created by Jack Wang on 2019-04-04.
//
/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/
#include <stdlib.h>
int reverse(int x)
{
    long reverse_result = 0;
    int sign = 1; //1 represent 正数，-1 represent 负数

    //judge overflow
    if(x > 0x7fffffff - 1 || x < -0x7fffffff)
        return 0;

    //judge sign
    if(x > 0)
        sign = 1;
    else if(x < 0)
    {
        sign = -1;
        x = abs(x);//cal the absolute value of x
    }
    else
        return 0;//if x is equal to 0

    //remove zero of the end of x
    while(x % 10 == 0)
    {
        x = x / 10;
    }

    //reverse the remaining of x
    while(x)
    {
        reverse_result = reverse_result * 10 + x % 10;
        if(reverse_result >= 0x7fffffff - 1)//judge overflow
            return 0;
        x /= 10;
        if(x == 0)
            break;
    }
    reverse_result *= sign;

    return reverse_result;
}