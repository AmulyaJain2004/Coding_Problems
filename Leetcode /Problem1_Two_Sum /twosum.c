/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* twosum = (int*)malloc(2*sizeof(int));
    for (int i = 0; i<numsSize-1; i++)
    {
        for (int j = i+1; j<numsSize; j++)
        {
            if (*(nums+i)+*(nums+j) == target)
            {
                twosum[0] = i;
                twosum[1] = j;
                *returnSize = 2;
                return twosum; 
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
