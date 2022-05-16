#include <stdio.h>

int count_num(char *s);

int main(){
    char s[] = "Welcome to Class 365. Today is 1st of July, 1995";
    printf("The numbers that appear in the sentence add up to: %d\n", count_num(s));
    return 0;
}
int count_num(char *s){
    int c=0, i=0;
    while(s[i]!='\0'){
        if(s[i]>='0' && s[i]<='9')c++;
        i++;
    }
    return c;
}

/*
Write a program where you declare and initialize a string in main.

Write a function which gets a string and counts how many numbers (0, 1, 2, 3, 4, 5, 6, 7, 8, or 9) occur on the strings. 
In main call the function and write out the results.
*/