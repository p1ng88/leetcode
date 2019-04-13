/*
2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order and each of their nodes contain a single digit. 
Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/


//Definition for singly-linked list.
#include <stdio.h>
#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
struct ListNode
{
	int val;
    struct ListNode *next;
};

int main()
{
	




	return 0;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode * resultNode,*resultNext,* result;
    struct ListNode node;
    resultNode = (struct ListNode *)malloc(sizeof(struct ListNode) * 3);
    result = resultNext = resultNode;
    int flag = 0;//进位标志,1表示进位(两个数字相加最多进位1)
    for(; l1 -> val != NULL || l2 -> val != NULL ; )
    {
        resultNode -> val = l1 -> val + l2 -> val + flag;
        printf("%d\n",l1 ->next->val);
        printf("%d\n",resultNode -> val);
        if(resultNode -> val >= 10)//如果有进位  
        {
            flag = 1;//向高位数进1位  
            resultNode -> val = resultNode -> val % 10;//余下的数
        }
        else 
            flag = 0;
        l1 = l1 -> next;
        l2 = l2 -> next;
        resultNext++;
        resultNode -> next = resultNext;
        resultNode++;
    }
        resultNode -> next = NULL;
    return result;
}













