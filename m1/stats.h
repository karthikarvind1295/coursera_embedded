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
 * @file Stats Header
 * @brief This file contains the implementation of the corsera course for modue 1
 *
 *
 * @author Karthik Arvind
 * @date 24th April 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(uint8_t *array, uint8_t size);
/**
 * @brief This function prints the statistics of an array
 * including minimum, maximum, mean and median
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns void function
 */

void print_array(uint8_t *array, uint8_t size);
/**
 * @brief This function prints the array on the screen
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns void function
 */

uint8_t find_median(uint8_t *array, uint8_t size);
/**
 * @brief This function returns the median value
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns the median in int 
 */

float find_mean(uint8_t *array, uint8_t size);
/**
 * @brief This function returns the mean value
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns the mean in float 
 */

uint8_t find_maximum(uint8_t *array, uint8_t size);
/**
 * @brief This function returns the maximum value
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns the maximum in int 
 */

uint8_t find_minimum(uint8_t *array, uint8_t size);
/**
 * @brief This function returns the minimum value
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns the minimum in int 
 */

void sort_array(uint8_t *array, uint8_t size);
/**
 * @brief This function returns the sorted array from maximum 
 * to minimum
 *
 * @param  array The input array that has to be printed
 * @param  size The size of the input array
 * @return returns the sorted array
 */


#endif /* __STATS_H__ */
