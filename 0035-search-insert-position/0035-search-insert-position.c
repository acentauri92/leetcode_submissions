
int binarySearch(int* array, int size, int target){
    int lower = 0;
    int upper = size -1;
    int middle;
    while(lower <= upper){
        middle = (lower + upper) / 2;
        if(target == array[middle]){
            return middle;
        }
        else if (target > array[middle]){
            lower = middle + 1;
        }
        else{
            upper = middle - 1;
        }
    }

    if(target < array[middle]){
        return middle;
    }
    else
        return middle + 1;
}

int searchInsert(int* nums, int numsSize, int target) {
    return binarySearch(nums, numsSize, target);
}


