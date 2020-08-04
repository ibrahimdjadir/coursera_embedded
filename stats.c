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
 * @file <stats> 
 * @brief <C program that do statistics on data set >
 *
 * <this program calculate the average min max of number set and sort them >
 *
 * @author <Djadir Ibrahim>
 * @date <24/07/2020 >
 *
 * *****************************************************************************/

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


/*******************************************************************************
* Function : print_stat  
* Description : print the calculated stats
*************************************************************************/
 
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test , SIZE);
  print_stats(test, SIZE);
  printf("Sorted Array:\n");
  print_array(test, SIZE);
}

/* Add other Implementation File Code Here */
void sort_array (unsigned char* array ,unsigned int count ){
unsigned int i,j;
int t;

	for (i=0; i<count; i++){
		for(j=i+1; j<count;j++){
			if (array[j] < array[i]){
				t=array[i];
				array[i]=array[j];
				array[j]=t;
			}
		}
	}

}
int find_max (unsigned char* array ,unsigned int count ){
	int max;
	return max=array[39] ; 
	
}
int find_min (unsigned char* array ,unsigned int count ){
	int min;
	return min= array[0]; 
}
int find_mean(unsigned char* array ,unsigned int count){
  	int i;
  	int average;
  		for(i = 0; i < count; i++){
    		average += array[i];
  	}		
 
  	return (average / count);
}
int find_med (unsigned char* array ,unsigned int count ){
	int med;
	return med=(array[19]+array[20])/2; 
}
int print_array (unsigned char* array ,unsigned int count){
	int i;
	for(i=0;i<count;i++){
		printf("%d  ", array[i]);
	}
}
void print_stats(unsigned char* array, unsigned int length) {
  unsigned char mean = 0, med = 0, max = 0, min = 0;
  mean = find_mean(array, SIZE);
  med = find_med(array, SIZE);
  max = find_max(array, SIZE);
  min = find_min(array, SIZE);

  printf("\nThe mean of the array is %d\n", mean);
  printf("The median of the array is %d\n", med);
  printf("the maximum of the array is %d\n", max);
  printf("the minimum of the array is %d\n\n", min);
}

