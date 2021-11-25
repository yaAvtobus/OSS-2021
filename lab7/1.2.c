
#include <stdio.h>

extern char **environ;
int main(int argc,char  *argv[]){
	char **p;
	int k = 0;
	for (p=environ; *p !=NULL; p++)
		k++;
	printf("Number of environment variables: %d\n", k);
	printf("Number of arguments: %d\n", argc-1);
	return 0;
}
/*#!/bin/bash
  env | wc -l
 */


