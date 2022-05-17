#include <stdio.h>

void min_maxx(int a, int y, int *smaller, int *greater);

int main(){
	int a, b, i, smaller, greater;
	
	for(i=0; i < 10; i++){
		printf("Please enter a pair of integers:\n");
		scanf("%d %d", &a, &b);
		min_maxx( a, b, &smaller, &greater);
		printf("Min= %d and Max= %d\n", smaller, greater);
	}
	return 0;
}

void min_maxx(int x, int y, int*smaller, int *greater){
	if(x > y){
		*smaller= y;
		*greater=x;
		return;
	}
		*smaller= x;
		*greater= y;
	return;
}
/*

Write a program which reads pairs of integers from the keyboard 10 times. After each pair the program  identifies the smaller and the greater value of the pair and writes out the result.

For instance,

you enter: 7 2

the response of the program is min=2 max=7

and this is repeated 10 times.

The program should contain a function which gets two integers and returns a smaller and the greater values.
*/