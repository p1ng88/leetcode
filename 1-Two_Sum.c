/*
1.Knowleage:
the difference of *p++ and *(p + 1):前者 p的地址发生了变化

2.Question Description:
Given an array of integers, return indices of the two numbers such that
 they add up to a specific target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

#define INDICES_SIZE 2

int* twoSum(int* nums, int numsSize, int target);

int main(void)
{
	// The result pointer is the returned array
	int numsSize, target, i, *resultp = NULL;
	int * nums = (int *) malloc (sizeof(int) * numsSize);

	printf("Please input the size of nums: ");
	scanf("%d", &numsSize);
	printf("Please input target: ");
	scanf("%d", &target);
	printf("Please input %d integer:", numsSize);
		
	for(i = 0; i <= numsSize -1; i++)
	{
		scanf("%d",&nums[i]);
	}

	resultp = twoSum(nums, numsSize, target);
	printf("%d  %d\n", *resultp, *(resultp + 1));
	// free(resultp);
	free(nums);

	return 0;
}

int* twoSum(int* nums, int numsSize, int target) 
{
    int i, j;
    int * indices = (int *) malloc (sizeof(int) * 2);
    
    for(i = 0; i <= numsSize - 1;i++)
    {
    	for(j = i + 1; j <= numsSize -1; j++)
    	{
    		if( nums[i] + nums[j] == target )
    		{
    			*indices = i;
    			*(indices + 1) = j;//point next element
    			return indices;
       		}
    	}

    }
    return NULL;
}





