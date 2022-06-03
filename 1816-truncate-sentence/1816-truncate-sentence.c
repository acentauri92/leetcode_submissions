

char * truncateSentence(char * s, int k){
    
    int i = 0;
    for(; s[i] != '\0' && k>0; ++i){
        if(s[i] == ' ')
            k--;
    }
    
    /*When k < total no of words, decrement i*/
    if(s[i] |= '\0')
        i--;
    s[i] = '\0';
    
    return s;

}