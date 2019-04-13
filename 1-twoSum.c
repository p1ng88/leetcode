/**

Question1:
	两数之和
description:
	给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。

示例:
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]

Solution:
	两次循环遍历

 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
int * twoSum(int* nums, int numsSize, int target);

int main(int argc, char const *argv[])
{
	int nums[] = {2, 7, 11, 15};
	int target = 9;
	static int * result;

	result = twoSum(nums,4,9);
	int i;

	for(i = 0;i < 2;++i)
	{
		printf("%d\n", result);
	}
	return 0;
}

int * twoSum(int* nums, int numsSize, int target) 
{
	int i,j;//两次循环变量
	

    for (i = 0; i < numsSize; ++i)
    {
    	for (j = 0; i < numsSize; ++j)
    	{
    		if (target == nums[i] + nums[j])
    		{
    			result[0] = i;
    			result[1] = j;
 
    			return result;
    		}
    	}
    }
}









