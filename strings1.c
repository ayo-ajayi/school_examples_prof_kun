#include <stdio.h>

void replace_char(char * sentence, char a);

int main()
{
    char sentence[] = "Welcome to my city, where I am king and lord";
    printf("%s\n", sentence);
    replace_char(sentence, 'm');
    printf("%s\n", sentence);
    return 0;
}

void replace_char(char *sentence, char a){
    int i=0;
    while(sentence[i] != '\0'){
        if(sentence[i]=='a')sentence[i]=a;
        i++;
    }
    return;
}

/*
Write a program where you declare and initialize a string with a long sentence in main. Write a function which gets a string and a single character.
The function should replace each character 'a' of the string with the character passed to the function.

Call the function in main and write out the string before and after the function call.
*/