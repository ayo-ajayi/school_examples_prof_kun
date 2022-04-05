#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[100], i = 0;
	FILE *in; 
	in = fopen("in.txt", "w");
	
	while(i < 100){
		arr[i]= rand()%(1000-10+1)+10;	
		i++;
	}
	i=0;
	while(i<100){
		if(arr[i]%2==0) fprintf(in, "%d\n", arr[i]);
		i++;
	}
	fclose(in);
	return 0;
	}
//Write a program where you declare an integer type array of size 100 and fill it with random numbers between 10 and 1000. Open a file for writing and write out the even elements of the array into the file. At the end of the program don't forget to close the file.

