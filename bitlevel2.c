#include <stdio.h>

int count0(unsigned short int c);

int main(){
int i = 0;
	while(i < 500){
	printf("Number of zeros in %d is %d\n", i, count0(i));
		i++;
	}
	return 0;
}

int count0(unsigned short int c){
	unsigned short int mask, bit; 
	int count, i = 15;
	
	while(i>=0){
		mask = 1<<i;
		bit = c & mask;
		bit = bit >>i;
		if(bit == 0) count++;
		i--;
	}
	return count;
}
/*
Write a program which has the following function: the function gets an unsigned short int type variable and returns the number of zero bits of the input bit chain.

In main write a loop which goes from 0 to 500 and write out the number of zeros of the numbers by calling the function.
*/