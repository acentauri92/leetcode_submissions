
bool isAcronym(char ** words, int wordsSize, char * s){
    size_t sizeOfString = strlen(s);
    for(int i = 0; i < wordsSize ; i++){     
            if( (words[i][0] != s[i]) || (wordsSize != sizeOfString) )
                return false;
    }
    return true;
}