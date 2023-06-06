/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Stats 
 * @brief This file contains the implementation of the corsera course for modue 1
 *
 *
 * @author Karthik Arvind
 * @date 24th April 2023
 *
 */



#include <stdio.h>
#include <stdint.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  uint8_t *array = test;
  uint8_t size = SIZE;  
  //print_array(array, size);
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(uint8_t *array, uint8_t size)
{
  print_array(array, size);
  float mean = find_mean(array, size);
  uint8_t median = find_median(array, size);
  uint8_t max = find_maximum(array, size);
  uint8_t min = find_minimum(array, size);

  printf("Mean : %f \n", mean);
  printf("Median : %d \n", median);
  printf("Maximum : %d \n", max);
  printf("Minimum : %d \n", min);

  //unsigned char sorted_array[size];
  sort_array(array, size);
  print_array(array, size);
}

void print_array(uint8_t *array, uint8_t size)
{
  
  printf("The elements of the array are: \n");
  for (uint8_t i = 0; i < size; i++)
  {
    printf("Element %d = %d \n", i, array[i]);
  }

}

uint8_t find_median(uint8_t *array, uint8_t size)
{
  uint8_t median_num = (size / 2);
  uint8_t temp;
  for (uint8_t i = 0; i < size - 1; i++)
  {
    for (uint8_t j = i+1; j < size; j++)
    {
      if (array[i] > array[j])
      {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
      }
    }
  }

  return array[median_num];
}

float find_mean(uint8_t *array, uint8_t size)
{
  int sum = 0;
  float avg;

  for(uint8_t i = 0; i < size; i++)
  {
      sum += array[i];
  }
  
  avg = sum / size ; 
  return avg;
}

uint8_t find_maximum(uint8_t *array, uint8_t size)
{
  uint8_t max = array[0];

  for(uint8_t i = 0; i < size; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
    }
  }

  return max;
}


uint8_t find_minimum(uint8_t *array, uint8_t size)
{
  uint8_t min = array[0];

  for(uint8_t i = 0; i < size; i++)
  {
    if(array[i] < min)
    {
      min = array[i];
    }
  }

  return min;
}


void sort_array(uint8_t *array, uint8_t size)
{
  // For loop for sorting the values
  uint8_t temp;  
  for (uint8_t i = 0; i < size - 1; i++)
  {
    for (uint8_t j = i+1; j < size; j++)
    {
      if (array[i] < array[j])
      {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
      }
    }
  }
}
