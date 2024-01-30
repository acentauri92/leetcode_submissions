

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    int* array = (int*) malloc(numsSize * sizeof(int));
    int index = 0;

    for(int i = 0, j = n; i < n, j < numsSize; i++, j++){
        array[index++] = nums[i];
        array[index++] = nums[j];
    }

    *returnSize = numsSize;
    return array;
}