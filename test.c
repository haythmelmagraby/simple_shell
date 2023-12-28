#include "main.h"
#include <stdio.h>
#include <string.h>

int main(int ac,char** av) {
    //char str[20];
    //strcpy(str, "Hello world");
	char *str2 = copy_string("haythm ahmed");
//	char *str2 = "haythm ahmed";
	//char *str2 = copy_string(*av);
	char *delim = " ";
    char *ptr = strtok(str2,delim);
    //char *ptr = strtok(*av,delim);
	printf("%s\n",ptr);
	ptr = strtok(NULL,delim);
	printf("%s\n",ptr);
    return 0;
}
