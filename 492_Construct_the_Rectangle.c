/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* constructRectangle(int area, int* returnSize) {
    int* ret = malloc(*returnSize);
    float square = sqrt(area);
    int width = (int)square;
    if(width*width == area){
        ret[0] = width;
        ret[1] = width;
        return ret;
    }else{
        for(; width >= 1; width--){
            int vlength = area / width;
            int length = (int)vlength;
            if(width * length == area){
                ret[0] = width;
                ret[1] = length;
                return ret;
            }
        }
    }
    return NULL;
}
int main()
{
    int* p;
    int num = 2;
    p = constructRectangle(5, &num);
    printf("p_0:%d\n", *(p++));
    printf("p_1:%d\n", *p);
    return 0;
}