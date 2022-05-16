#include <stdio.h>
#include <string.h>

int main() {
	char s[200], n[200];
	FILE *fp;
	
	printf("please enter file name: ");
	scanf("%s", s);
	sprintf(n, "%s001", s);
	fp=fopen(n, "r");
	while(!feof(fp)){
		fscanf(fp, "%s", s);
		printf("%s", s);
	}
	fclose(fp);
	return 0;
}


/*
Read a string from the keyboard. You can assume that the string is just a single word (it does not contain spaces). 
Using the sprintf function of string.h, modify the string by adding 001 to the end. 
So for instance, if you enter the word "apple" the modified string should be "apple001".

Open a file for reading where the physical name of the file is given by the modified string.
*/





