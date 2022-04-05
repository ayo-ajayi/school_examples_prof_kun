#include <stdio.h>

unsigned short int get_set(unsigned short int c, 	int i);
unsigned short int print_bits(unsigned short int c);
int main(){
	unsigned short int arr[16] = {129, 375, 124, 34, 689, 7887, 6912, 124, 5458, 2524, 199, 247, 1024, 11121, 1125, 3247};
	int i=0;
	while(i<16){
		print_bits(arr[i]);
		printf("\n");
		i++;
	}
	printf("..........................\n");
	i=0;

	while(i<16){
		print_bits(get_set(arr[i], i));
		printf("\n");
		i++;
	}
	return 0;
	}

unsigned short int get_set(unsigned short int c, 	int i){
	unsigned short int mask;
	mask = 1<<i;
	c &= ~mask;
	return c;
}

unsigned short int print_bits(unsigned short int c){
	int i= 15;
	unsigned short int mask, bit;

	while(i>=0){
		mask = 1<<i;
		bit = c & mask;
		bit = bit >> i;
		printf("%d", bit);
		i--;
	}
}
/*
Write a program which contains an array of type unsignedshortint. The size of the array should be 16. Initialize the array by hand.

The program should contain a function which gets a single unsigned char type variable and the index of a bit i. The function should set the bit of index i to zero and should return the new bitchain.

Using the function set a bit to zero in each array element in such a way that the index of the bit to be changed should be equal to the index of the value in the array. For instance, in the array element of index 5 the bit of index 5 should be set to zero.

*/
