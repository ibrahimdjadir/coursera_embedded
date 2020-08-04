
/**
 * @file <stats.h> 
 * @brief <header file >
 *
 *
 * @author <djadir ibrahim>
 * @date <26/07/20 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Size of the Data Set */
#define SIZE (40)

/*******************************************************************************
* Function : sort array 
* Description : the function will take an array as input and sort it using bubble sort algo
* Parameter : int *ptr poiter to thec array 
              int count size of the array 
* Return : sorted array
*************************************************************************/
void sort_array (unsigned char* array ,unsigned int count);
/*******************************************************************************
* Function : find_max  
* Description : find maximum of an array 
* Parameter : int *ptr poiter to the array 
              int count size of the array 
* Return : maximum of the array
*************************************************************************/
int find_max (unsigned char* array ,unsigned int count);
/*******************************************************************************
* Function : find_min  
* Description : find manimum of an array 
* Parameter : int *ptr poiter to the array 
              int count size of the array 
* Return : manimum of the array
*************************************************************************/
int find_min (unsigned char* array ,unsigned int count);
/*******************************************************************************
* Function : find_mean  
* Description : find mean of an array 
* Parameter : int *ptr poiter to the array 
              int count size of the array 
* Return : mean of the array
*************************************************************************/
int find_mean (unsigned char* array ,unsigned int count);
/*******************************************************************************
* Function : find_mediem  
* Description : find mediem of an array 
* Parameter : int *ptr poiter to the array 
              int count size of the array 
* Return : mediem of the array
*************************************************************************/
int find_med (unsigned char* array ,unsigned int count);
/*******************************************************************************
* Function : print_array   
* Description : print the sorted array element 
* Parameter : int *ptr poiter to the array 
              int count size of the array 
*************************************************************************/
int print_array (unsigned char* array ,unsigned int count);
/*******************************************************************************
* Function : print_stat  
* Description : print the calculated stats
*************************************************************************/
void print_stats (unsigned char* array ,unsigned int count);


#endif /* __STATS_H__ */
