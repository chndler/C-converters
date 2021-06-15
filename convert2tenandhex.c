#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
	long int result;
	
	if(argc != 2){
		printf("Error! Usage: convertNum [number in decimal/hex]\n");
		return -1;
	}
	
	//Converts and prints answer if token starts w/ '0x'
	if(strncmp(argv[1], "0x", 2) == 0){
		result = strtol(argv[1], NULL, 16);
		//Moves argv1 ptr past '0x'
		argv[1] = &argv[1][2];
		printf("%ld 0x%s \n", result, argv[1]);
	}

	//Converts and prints answer if token is decimal
	else{
		//Moves argv ptr past any initial 0s
		while(argv[1][0]=='0'){
			argv[1]++;
		}
		result = strtol(argv[1], NULL, 0);
		printf("%ld 0x%X \n", result, (int)result);
	}

	return 0;
}
