int numJewelsInStones(char* jewels, char* stones) {
    int count;
    //Loop through jewels
    for(int i = 0;i < strlen(jewels); i++){
        //Loop through stones
        for(int j = 0; j < strlen(stones); j++){
            if(jewels[i] == stones[j]){
                count++;
            }
        }
    } 
    return count;  
}