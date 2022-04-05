#include <stdio.h>
int count_1(unsigned char c);

int main(){
	unsigned char a[10] = {2,46,4,64,3,5,36,12,21,72};
	int i = 0;
	while(i<10){
		printf("%d ---> %d\n", a[i], count_1(a[i]));
		i++;
	}
	return 0;
}
int count_1(unsigned char c){
	unsigned char mask, bit;
	int count=0;
	for(int i = sizeof(unsigned char )*8-1; i >= 0; i--){
		mask = 1<<i;
		bit = c & mask;
		bit = bit >> i;
		if(bit == 1) count++;
	}
	return count;
	
}

//Write a program to handle unsigned char type bit chains. The program should contain a function which gets an unsigned char type variable and returns the number of ones of the bit chain.

//In main declare an unsigned char type array of size 10 and initialize the array elements by hand. Then call the function for each element of the array and write out the number of ones for each of them on the screen.