int isPalindrome(int x){

	/* Array size 11 as x < 2^31*/
    ssize_t size = 11;
    
    char pstring[size];
	snprintf(pstring, size, "%d", x);

    int length = strlen(pstring) - 1;

    for(int i = length; i > 0; i--){
        if(pstring[length-i] == pstring[i])
        	continue;
        else
        	return false;
    }   
	return true;
}
