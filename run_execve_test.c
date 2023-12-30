#include "main.h"
#include <stdio.h>
#include <unistd.h>

int main(int ac, char** av){
	int i = 0;
//	char **args = split_string(*av," ");
//	while(args[i] != NULL){
//                printf("%s\n",args[i]);
//                i++;
//        }
	 char* param = {"/bin/ls"};
        char** ptr = &param;
	if(execve(ptr[0],ptr,NULL) == -1){
//	if(execve(av[1],av+1,NULL) == -1){
		printf("the path is : %s\n",av[1]);
		perror("ERROR");
	}	
	return 0;
}
