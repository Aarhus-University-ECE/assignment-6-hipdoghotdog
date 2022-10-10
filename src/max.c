#include <stdio.h>
#include <assert.h>
//Finds the largest value in an array
int max(int* numbers, int size)
{
    assert(size > 0); //Asserts that the array is not empty
    //I set a to the first value to make sure the program also works for all negative values
    int a = numbers[0];
    for(int i=0;i < size; i++){
        if (numbers[i] > a)
            a = numbers[i];
  }

  return a;
}

   