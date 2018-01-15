

#include <stdio.h>
#include "getword.h"
int getword(char *input){                    

	int i;
	char word[STORAGE];
    for(i=0; i<STORAGE; i++){
    	if((input[i] != EOF) && (input[i] != '\t')){
    		word[i] = input[i];
    	}
    }


    return 0;
}