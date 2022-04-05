#include <stdio.h>
#include <stdlib.h>

float rand01();
int main(){
	FILE *out;
	out = fopen("out.txt", "w");
	float arr[100];
	int i = 0;
	while(i < 100){
		arr[i]=rand01();
		i++;
	}
	i=0;
	while(i < 100){
		if(arr[i] > 0.5)fprintf(out, "%f\n", arr[i]);
		i++;
	}
	fclose(out);
	return 0;
}
float rand01(){
	return (float)rand()/(float)RAND_MAX;
}

/*


Write a program where you open a file for writing (output). The function should contain a function which returns a random real number between 0 and 1. In main declare a float type array of size 100 and fill it with random real number by calling the function. Write out those elements of the array which are greater than 0.5 into the file in one coloumn.
*/