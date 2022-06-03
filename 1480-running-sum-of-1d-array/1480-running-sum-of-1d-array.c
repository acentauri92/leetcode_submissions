/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){

    int* returnArray = (int*) malloc(numsSize * sizeof(int));
    int temp;
    
    for(int i=0; i<numsSize; i++){
        
        temp = 0;
        
        for(int j=0; j<=i; j++)           
            temp = temp + nums[j];
        
        returnArray[i] = temp;                
    }
    
    *returnSize = numsSize;
    
    return returnArray;
}