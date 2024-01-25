void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int* array, int size){
    for(int i = 0; i < size-1; i++){
        //Take first index as min value
        int minValue = i;

        //Find min value
        for(int j = i+1; j < size; j++){
            if(array[j] < array[minValue]){
                minValue = j;
            }
        }

        swap(array + i, array + minValue);  
    }
}

int removeElement(int* nums, int numsSize, int val) {

    //replace all the val occurences with 9999
    int count = 0;
    int temp = 9999;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            count++;
            nums[i] = temp;
        }
    }

    //Reverse sort so that 9999s are placed in the end
    selectionSort(nums, numsSize);

    return (numsSize - count); 
}


