/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {

    /*Create an array with size equal to wordsSize to store the solution*/
    int* solutionArray = (int*) malloc(wordsSize * sizeof(int));
    *returnSize = 0;

    for(int i = 0; i < wordsSize; i++){
        if(strchr(*(words+ i), x) != NULL){
            solutionArray[(*returnSize)++] = i;
        }
    }

    if(!(*returnSize)){
        return NULL;
    }
    return solutionArray; 
}