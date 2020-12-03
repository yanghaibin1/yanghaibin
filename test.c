#include "paixu1.h"                                                                                                          
   
     int main(int argc, char **argv)
	   {
		         int arr0[] = {42, 93, 63, 15, 26, 57, 48, 79, 80};
		           int arr1[] = {42, 93, 63, 15, 26, 57, 48, 79, 80};
			       int arr2[] = {42, 93, 63, 15, 26, 57, 48, 79, 80};
			         int arr3[] = {42, 93, 63, 15, 26, 57, 48, 79, 80};
			          int *ptrArr[] = {arr0, arr1, arr2, arr3};
			           int arrSize = sizeof(arr0)/sizeof(arr0[0]);
			          outArr("bubbleSort", "before", *(ptrArr + 0), arrSize);
			            
					     bubbleSort(*(ptrArr + 0), arrSize);
				      outArr("bubbleSort", "after", *(ptrArr + 0), arrSize);
				       outArr("insertSort", "before", *(ptrArr + 1), arrSize);
				        insertSort(*(ptrArr + 1), arrSize);
				         outArr("insertSort", "after", *(ptrArr + 1), arrSize);
				             outArr("selectSort", "before", *(ptrArr + 3), arrSize);
					      selectSort(*(ptrArr + 3), arrSize);
					       outArr("selectSort", "after", *(ptrArr + 3), arrSize);
					        outArr("quickSort", "before", *(ptrArr + 4), arrSize);
					         quickSort(*(ptrArr + 4), 0, arrSize - 1);
					          outArr("quickSort", "after", *(ptrArr + 4), arrSize);
					           
						           return 0;
					        }
