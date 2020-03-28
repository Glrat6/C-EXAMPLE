#include<stdio.h>


double minbul(double array[],int size);
 int main()
 {
 	double dizi[]={0,-8,1.-9,4,-127};
 	double min;
 	min = minbul(dizi ,5);
 	printf("min deger : %f",min);
 	return 0;
 }
 double minbul(double array[],int size)
 {
 	double *ptr,min;
 	int i;
 	ptr = array;
 	for(i=0;i<size;i++)
 	 {
 	 	if(*ptr<min){
 	 		
 	 		min = *ptr ;
 	 		
		  }
		  		  *ptr++;

	  }
	  return min;
 }

