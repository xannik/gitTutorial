#include <stdio.h>
#include <stdbool.h>
#include "toBinary.h"

#define MAX_NUMBER_OF_TESTDATA 10
#define NUMBER_OF_BITS_IN_BYTE 8
typedef struct test
{
    int number;
    char byteString[NUMBER_OF_BITS_IN_BYTE];
} testData;

//local function header
bool checkBinaryString(char* expectedByteString, char* byteString);

int main(void) 
{
    testData data[10] = {
        {5,"00000101"},
        {10,"00001010"},
        {50,"00110010"},
        {13,"00001101"},
        {42,"00101010"},
        {255,"11111111"},
        {36,"00100100"},
        {1,"00000001"},
        {128,"10000000"},
        {206,"11001110"},
    };

    int counter = 0;

    /*
      @param Input int number from data
      @param char array with length NUMBER_OF_BITS_IN_BYTE
      function toBinary
        
    */
   for (int i = 0; i < MAX_NUMBER_OF_TESTDATA; i++)
   {
       if (checkBinaryString(&data[i].byteString[0], /*input from function */))
       {
           counter++;
       }
   }

    if (counter == MAX_NUMBER_OF_TESTDATA)
    {
        return 0;
    }
    return 1;
}    

//local function implementation
bool checkBinaryString(char* expectedByteString, char* byteString){
 
    for (int i = 0; i < NUMBER_OF_BITS_IN_BYTE; i++)
    {
        if(expectedByteString[i] != byteString[i])
        {
            return false;
        } 
          
    }
    return true;
}