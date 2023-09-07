#define AGE_DIGIT_1 11
#define AGE_DIGIT_2 12
#define ASCII_VAL_OF_ZERO 48

int countSeniors(char ** details, int detailsSize){
    int count = 0;

    for(int i = 0; i < detailsSize; i++){
        // Convert char values to int. Refer ASCII table     
        int intValue = ( (details[i][AGE_DIGIT_1] - ASCII_VAL_OF_ZERO) * 10  + \
                        (details[i][AGE_DIGIT_2] - ASCII_VAL_OF_ZERO) );
        if(intValue > 60)
            count++;
    }
    return count;
}


       // printf("%d ", details[i][11]);
        // printf("%d ", details[i][12]);