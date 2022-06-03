int mostWordsFound(char ** sentences, int sentencesSize){
    
   int j = 0, currentWordCount = 0, maxWordCount = 0;
    
   /*Loop through each sentence*/
    for(int i=0; i<sentencesSize; i++){
          
       while(sentences[i][j++] != '\0'){
           if(sentences[i][j] == ' ')
               currentWordCount += 1;
       }
       
       /* Account for the last word. If end of string is
       reached, add one word.*/
       currentWordCount += 1;
    
    if(currentWordCount > maxWordCount)
        maxWordCount = currentWordCount;
       
    /*Reset the counters*/    
    j = 0;
    currentWordCount = 0;
       
   }
    
   return maxWordCount;

}