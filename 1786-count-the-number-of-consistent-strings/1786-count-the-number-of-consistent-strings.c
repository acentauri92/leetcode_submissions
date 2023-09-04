int isCharPresent(char* allowed, char* word );
int isInWord(char a, char* word);

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int count = 0;
    for(int i = 0; i < wordsSize; i++){
        if( isCharPresent(allowed, words[i]) ){
            count++;
        }           
    }
   return count; 
}

// Checks if all letters in word are present in a string named allowed
int isCharPresent(char* allowed, char* word ){
    size_t length = strlen(word);
    for(int i = 0; i < length; i++){
        if( isInWord(word[i], allowed) )
            continue;
        else
            return 0;
    }
    return 1;
}

//Checks if  a character is present in a word
int isInWord(char a, char* word){
    int present = 0;
    size_t length = strlen(word);
    for(int i = 0; i < length; i++){
        if(a == word[i])
            return 1;
    }
    return 0;
}
