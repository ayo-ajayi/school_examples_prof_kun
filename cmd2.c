#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	if (argc != 4) {
    		printf("Number of arguments is incorrect\n");
   	 	return 1;
  	}
	float num2; int num1; char word[20], fname[20];
	FILE * fp;
	sscanf(argv[1], "%d", &num1);
	sscanf(argv[2], "%f", &num2);
	sscanf(argv[3], "%s", word);
	sprintf(fname, "%s.%03d", word, num1);
	
	fp=fopen(fname, "w");
	if(!fp) {
        fprintf(stderr, "File opening failed");
        return 1;
    	}
	fprintf(fp, "float is: %f", num2);
	fclose(fp);
	
	return 0;
}


/*
Write program which takes 4 command line arguments and check if the program has received the proper number of arguments. Among the arguments there should be an integer, a float type number, and a word which can be used as a file name.

The program should open a file for reading. The file name should be generated from the world and the integer of the command line arguments in such a way that the file name should contain the word and an extension which is an integer represented on 3 decimal places complemented with 0s if needed. For instance if the word is apple and the integer is 3 on the command line then the file name should be apple.003. The program should check whether the file opening was successful or not. if it was not successful, the program should quit.

The float type number from the command line should be written out into the file.
*/