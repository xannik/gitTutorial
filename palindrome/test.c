#include <stdio.h>
#include <stdbool.h>
#include "palindromeFunc.h"

#define MAX_RIGHT_WORDS 15

typedef struct wordList
{
    char word[30]; // input to function
    bool valid; // reference data
} WordList;




int main(void){
 
    WordList words[15] =
    {
        {"radar", true},
        {"civic", true},
        {"car", false},
        {"mom", true},
        {"rifle", false},
        {"hamburger", false},
        {"baseball", false},
        {"repaper", true},
        {"rotator", true},
        {"computer", false},
        {"stats", true},
        {"snow", false},
        {"kayak", true},
        {"guitar", false},
        {"fire", false},

    };    

    int counter = 0;
    size_t length = sizeof(words)/sizeof(words[0]);
    for (int i = 0; i < length; i++){
     
     counter += /* input function here */ ? 1 : 0; 
        
    }

    if (counter == MAX_RIGHT_WORDS){
        return 0;
    }
    else
    {
        return 1;
    }
    
};