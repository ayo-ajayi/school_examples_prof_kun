#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int n);
int sqr_arr(int arr[], int n);
int randab(int a, int b);

int main(){
	int arr[1000], i=0, count =0;
	while(i<1000){
		arr[i]=randab(10, 10000);
		i++;
	}i = 0;
	print_arr(arr, 1000);
	printf("\nThe sum of the squares is: %d\n", sqr_arr(arr, 1000));
	printf("\n\nThe elements whose square are greater than 1000 are: \n");
	while(i<1000){
		if(( arr[i]*arr[i]) > 1000){
			printf("%d ",arr[i]);
            if((count+1)%5==0)printf("\n");
			count++;
		}
	
		i++;
	}
	printf("Their count is: %d", count);
	return 0;
}

int randab(int a, int b){
	return rand()%(b-a+1)+a;
}

void print_arr(int arr[], int n){
	int i=0;
	while(i < n){
		printf("%d  ", arr[i]);
        if((i+1) % 5 == 0)printf("\n");
		i++;
	}
	return;
}

int sqr_arr(int arr[], int n){
	int i=0, sum = 0;
	while(i < n){
		sum +=( arr[i]*arr[i]);
		i++;
	}
	return sum;
}

/*Write a program which contains an integer type array of size 1000. Write a function which generates random integers in an [a,b] interval, and use this function to fill the array with random integers between 10 and 10000.

Write a function which gets a one-dimensional integer type array and prints the array elements in such a way that 5 numbers appear in one line separated by a space. After each 5th number a new line is started.

Write a function which gets a one-dimensional integer type array and returns the sum of the square of the array elements. Call this function in main. Determine the number of those array elements whose square is greater than 1000, and write out the results on the screen.*/
