#include<stdio.h> //Header File

int main(int argc, int *argv[]){
	int i=0;

	printf("Number of Arguments passed: %d\n\n", argc);
	
	for(i=0;i<argc;i++)
		printf("%s\n",argv[i]);
	
//	printf("%d", (int) (argv[1]));
   	return 420;
}
