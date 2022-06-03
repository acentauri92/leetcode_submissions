char * restoreString(char * s, int* indices, int indicesSize){
    
    /* Create temp array to store reaaraged chars */
    char output[indicesSize+1];
    
    for(int i =0; i<indicesSize; i++)
        output[indices[i]] = s[i];
    
    /* Copy rearranged string to original */
    for(int i=0; i<indicesSize; i++)
        s[i] = output[i];
    
    return s;
}
