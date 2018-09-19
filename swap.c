//Ahnaf Hasan
//2018-09-19
//Homework#4 -- Hot Swapping
//Systems

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intArray[10];
int secondArr[10]; 
int * arrPointer; //pointer


int main() {
    srand(time(NULL)); //seeded
    int i = 0;
    int randNum = 0;
    for (; i < 10; i++) {
        randNum = rand();
        intArray[i] = randNum;
        if (i == 9) {
            intArray[i] = 0;
        }
        printf("Value at %i is: %d\n", i, *(intArray + i));
    } 
    printf("\nNow to copy over\n\n------------------------\n");
    arrPointer = &(*(intArray + 9)); //take address of last arr value

    for (; i > 0; i--) {
        *(secondArr + (10 - i)) = *arrPointer;
        printf("Value at %i is now: %i\n", 10 - i, *arrPointer--); //decrements but returns old val
    }
    return 0;
}