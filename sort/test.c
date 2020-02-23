#include <stdio.h>
#include "sort.h"
#include <stdbool.h>

#define MAX_RIGHT_VAULES 6

typedef struct dataList{
    int unsortedData[10]; // input data
    int expectedSortedData[10]; // reference data
    bool acending; // input to function true == acending, false == decending
} DataList;

bool checkSort(int* expected, int* output, size_t length);

int main(void)
{
    DataList data[6] = 
    {
        {{3,5,1,10,30,15,19,12,100,29},{1,3,5,10,12,15,19,29,30,100},true},
        {{3,5,1,10,30,15,19,12,100,29},{100,30,29,19,15,12,10,5,3,1},false},
        {{7,3,6,10,33,19,16,243,113,29},{3,6,7,10,16,19,29,33,113,243},true},
        {{7,3,6,10,33,19,16,243,113,29},{243,113,33,29,19,16,10,7,6,3},false},
        {{4,1,2,10,7,25,22,44,45,18},{1,2,4,7,10,18,22,25,44,45},true},
        {{4,1,2,10,7,25,22,44,45,18},{45,44,25,22,18,10,7,4,2,1},false}
    };

    size_t length = sizeof(data)/sizeof(data[0]);
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (checkSort(data[i].expectedSortedData,/* input result of function */,length)){
            counter++;
        }
    }
    if (counter == MAX_RIGHT_VAULES)
    {
        return 0;
    }
    return 1;
}

bool checkSort(int* expected, int* output, size_t length)
{
    for (int i = 0; i < length; i++)
    {
        if (*expected != *output){
            return false;
        }
        expected++;
        output++;
    }
    return true;
}