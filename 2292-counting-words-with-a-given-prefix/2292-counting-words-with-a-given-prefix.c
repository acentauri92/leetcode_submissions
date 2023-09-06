int prefixCount(char ** words, int wordsSize, char * pref){
    size_t lengthOfPref = strlen(pref);
    int count  = 0;  //Keeps track of letter match count
    int numberOfStrings = 0; //Keeps track of the string match count

    for(int i = 0; i < wordsSize; i++){
        for(int j = 0; j < lengthOfPref; j++){
            if(words[i][j] != pref[j])
                break;
            else{
                count++;
                if(count == lengthOfPref)
                    numberOfStrings++;
                continue;
            }
                
        }
        count = 0;              
    }
    return numberOfStrings;
}