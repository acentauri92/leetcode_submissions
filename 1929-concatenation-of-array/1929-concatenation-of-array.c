/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2 * numsSize;
    int* array = (int*) malloc(sizeof(int) * (*returnSize));

    for(int i = 0; i < (*returnSize); i++){
        array[i] = nums[i % numsSize];
    }
    return array;
}