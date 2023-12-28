#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char* copy_string(const char* src){
	int i=0,j=0;
	char* copy;
	while(src[i] != '\0'){
		i++;
	}
	copy = malloc(sizeof(char)*(i+1));
	if(copy == NULL){
		printf("can't allocate copy in memory");
		return NULL;
	}
	while(j<i){
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return copy;
}
