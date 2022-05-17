#include <stdio.h>
#include <string.h>

void remove_char(char * sentence, char a);

int main()
{
    char sentence[] = "Welcome to my city, where I am king and lord";
    printf("%s\n", sentence);
    remove_char(sentence, 'm');
    printf("%s\n", sentence);
    return 0;
}

void remove_char(char *sentence, char a){
    int i=0, j, len = strlen(sentence);
    
    for(i=0; i<len; i++){
        if(sentence[i]==a){
            for(j=i; j<len; j++)sentence[j] = sentence[j+1];
            len--;
            i--;
        }
    }
    return;
}

/*
Write a function which gets a string and a single character.
The function modifies the string by removing the given character. Removing the character means that the rest of the string is shifted to left. For instance, if the function gets "apple" and "a", the new string is "pple".

If the input is "apple" and "p", then the new string is "ale".

Call the function is main and write out the result.
*/