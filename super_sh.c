#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	char *delim = " \n";
	char** ptr_arr;

	printf("hsh$");
	while((read = getline(&line,&len,stdin)) != -1){
		ptr_arr = split_string(line,delim);
		excute(ptr_arr);	
		printf("hsh$");
	}
	free(line);
	printf("\n");
	return 0;
}
