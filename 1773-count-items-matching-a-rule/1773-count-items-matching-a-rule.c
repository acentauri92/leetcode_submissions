int countMatches(char *** items, int itemsSize, int* itemsColSize, char * ruleKey, char * ruleValue){

    int count=0;
    
    switch(*ruleKey){
       
        case 't':
            for(int i=0; i<itemsSize; i++){
                if( !strcmp(items[i][0], ruleValue) )
                count++;
            }
            break;
            
        case 'c':
            for(int i=0; i<itemsSize; i++){
                if( !strcmp(items[i][1], ruleValue) )
                count++;
            }
            break;
            
        case 'n':
            for(int i=0; i<itemsSize; i++){
                if( !strcmp(items[i][2], ruleValue) )
                count++;
            }
            break;
            
        default:
            return 1;
            
    }
    return count;
}