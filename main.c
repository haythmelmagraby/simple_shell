#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac,char **av){
	int i =0;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char* delim = " ";
	
//	char* str = copy_string(*av);	
	char* str = copy_string("haythm ahmed aly abdallah");	
	char* token = strtok(str,delim);
	printf("%s\n",token);
	while(token != NULL){ 
	token = strtok(NULL,delim);
	printf("%s\n",token);
	}
	printf("end tokens loop\n");

	while(av[i] != NULL){	
	printf("start args loop\n");
		printf("index is [%d] %s\n",i,av[i]);
		i++;
	}
	printf("finish args loop\n");

	printf("$");
	while((read = getline(&line,&len,stdin)) != -1){
		printf("%s",line);
		printf("$");
	}
	free(line);
	printf("\n");
	return 0;
}
