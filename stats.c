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
 * @file Stats.c
 *
 * @brief This file is an example .c file for the Embedded Systems
 * Specialization Course from the University of Colorado brought to you by 
 * Coursera.
 *
 * <This file will be peer reviewed>
 *
 *
 *
 *
 * @author Javier Olivares
 *
 * @date 6/3/2018
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// Function declarations
void print_statistics(unsigned char median, unsigned char mean,
	       	unsigned char maximum, unsigned char minimum);

void print_array(unsigned char * stats, unsigned int length);      

unsigned char find_mean(unsigned char * stats, unsigned int length);       

unsigned char find_maximum(unsigned char * stats, unsigned int length); 

unsigned char find_minimum(unsigned char * stats, unsigned int length);

unsigned char find_median(unsigned char * stats, unsigned int length);       

unsigned char * sort_array(unsigned char * stats, unsigned int length);       

void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /*Variable Declarations*/

 unsigned char mean;
 unsigned char maximum;
 unsigned char minimum;
 unsigned char median;
 unsigned char * sorted_array;
 
 /* Statistics and Printing Functions */
 print_array(test, SIZE);
 mean = find_mean(test, SIZE);
 maximum = find_maximum(test, SIZE);
 minimum = find_minimum(test, SIZE);
 sorted_array = sort_array(test, SIZE);

 median = find_median(sorted_array, SIZE);

 print_statistics(median, mean, maximum, minimum);
 
}

// A function that prints the statistics of an array including min, max, mean
// median.
void print_statistics(unsigned char median, unsigned char mean, unsigned char maximum, unsigned char minimum){
}

// Given an array of data and a length, prints the array to the screen
void print_array(unsigned char * stats, unsigned int length){
}

// Given an array of data and a length, returns the median value
unsigned char find_median(unsigned char * stats, unsigned int length){
}

// Given an array of data and a length, returns the mean 
unsigned char find_mean(unsigned char * stats, unsigned int length){
}

// Given an array of data and a length, returns the maximum
unsigned char find_maximum(unsigned char * stats, unsigned int length){
 }

 return maximum;
}

// Given an array of data and a legth, returns the minimum
unsigned char find_minimum(unsigned char * stats, unsigned int length){
}

// Given an array of data and a length, sorts the array from largest
// to smallest.(The zeroth Element should be the largest value, and
// the last element(n-1)  should be the smallest value.)
unsigned char * sort_array(unsigned char * stats, unsigned int length){
}
