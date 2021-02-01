#include <stdio.h>              //Header files
#include <stdlib.h>

int main()                      //main Method
{                               //Method (Container)
    char characterName[] = "John";
    // [] tells C that you wanna store multiple characters
    int characterAge = 35;
    const int NUM = 5;  /* const keyword sets up a constant that cannot be
    updated later via any command lest it throws an error.
    Also, write a constant in block letters (good practice)*/
    printf("There was once a man named %s.\n", characterName);  // printf() is 'print function'
    // String is a collection of characters and %s is a placeholder for a string
    printf("He was %d years old.\n", characterAge);
    // %d is a integer placeholder
    printf("He really liked the name %s.\n", characterName);
    printf("But he did not like being %d.\n", characterAge);
    return 0;
}
