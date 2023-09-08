int minDeletionSize(char ** strs, int strsSize){
    int count = 0;
    size_t lengthOfString = strlen(strs[0]);
    for(int j = 0; j < lengthOfString; j++){
        for(int i = 0; i < strsSize - 1; i++){
           if(strs[i][j] > strs[i+1][j]){
               count++;
               break;
           }
        }
    }
    return count;
}