#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_getenv(const char *name){
	extern char **environ;
	int i=0;
	char* token;
	char* delim = "=";
	printf("name : %s ,,",name);

	while(environ[i]){
//		printf("environ [%d] : %s ,,",i,environ[i]);
		token = strtok(environ[i],delim);
//		printf("token : %s\n",token);
		if(strcmp(token,name)==0){		
			printf("catched token before strk : %s\n",token);
//			printf("COMPARE RESULT : %d\n",strcmp(token,name));
			token = strtok(NULL,delim);
			printf("catched token after strk : %s\n",token);
//			return (strtok(NULL,delim));
			return token;
		}
		i++;
	}

	return NULL;
}

void print_path(){
	char* path= _getenv("PATH");
	if(path == NULL){
		printf("PATH IS NOT SET!");
		return;
	}

	char* token=strtok(path,":");
	while(token != NULL){
		printf("value is : %s\n",token);
		token=strtok(NULL,":");
	}

}

int main(void){
	char* line;
	size_t len;
	ssize_t read;
	char* delim = " \n";
	char** arr;
	int i;

	print_path();

	while((read = getline(&line,&len,stdin)) != -1){
		i =0;
		arr = split_string(line,delim);
		while(arr[i]){
			/*REMEMBER :  we will can't call strtok multi time in
			loop because it remember it posision from static variable*/
			printf("arr [%d] : %s\n",i,arr[i]);
			printf("%s : %s\n",arr[i],_getenv(arr[i]));
//			printf("line : %s\n",line);
//			printf("%s\n",_getenv(line));
			i++;
		}
		//free(arr);
	}
	

	return 0;
}
