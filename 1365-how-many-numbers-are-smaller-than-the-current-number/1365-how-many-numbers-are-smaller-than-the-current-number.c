/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {

    int* array = (int*)malloc(sizeof(int) * numsSize);
    int index = 0;
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize; j++){
            if(nums[j] < nums[i]){
                count++;
            }
        }
        array[index++] = count;
        count = 0;
    }
    *returnSize = index;
    return array;    
}