int countPrefixes(char ** words, int wordsSize, char * s){
    int count = 0;
    
    for(int i = 0; i < wordsSize; i++){
        size_t lengthOfWord = strlen(words[i]);
        for(int j = 0; (j < lengthOfWord) && (j < strlen(s)); j++){
            if(words[i][j] == s[j]){
                if(j == ( lengthOfWord - 1) )
                    count++;
                continue;
            }               
            else
                break;
        }      
    }
    return count;

}