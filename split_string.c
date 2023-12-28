#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** print_plited (char *src,char *delim){
	int index = 0,i = 0;

	char *str = copy_string(src);
	char *token = strtok(str,delim);
	while(token != NULL){
//		printf("%s\n",token);
		token = strtok(NULL,delim);
		index++;
	}	
	char** arr = malloc(sizeof(char *)*index);
	if(arr == NULL){
		fprintf(stderr,"faild allocate memory\n");
		free(str);
		return NULL;
	}else{	
//		printf("size of char * * index is %lu\n",sizeof(char *)*index);
//		printf("size of char is %lu\n",sizeof(char));
//		printf("size of char * is %lu\n",sizeof(char *));
		printf("allocate %lu memory succes\n",sizeof(arr));
	}
	str = copy_string(src);
	token = strtok(str,delim);
	while(token != NULL){
//		printf("result of token:%s\n",token);
		arr[i] = token;
		token = strtok(NULL,delim);
//		printf("result of arr[%d]:%s\n",i,arr[i]);
		i++;
	}
	arr[i] = NULL;
	return arr;
}


int main(void){
	char** myarr = print_plited("haythm elmagraby ahmed abd elbary"," ");
	int i =0 ;
	while(myarr[i] != NULL){
		printf("%s\n",myarr[i]);
		i++;
	}
	return 0;
}
