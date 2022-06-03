

int finalValueAfterOperations(char ** operations, int operationsSize){
    
    int X = 0;
    for(int i=0; i<operationsSize; i++){
          
            if(( operations[i][0] == 'X' && operations[i][1] == '+' ) || \
               operations[i][0] == '+')
                X++;
        
            else 
                X--;
    } 
    
    return X;
}