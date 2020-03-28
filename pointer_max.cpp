#include<stdio.h>

double maxbul(double array[],int size);
int main()
{
	double dizi[]={1.2,3.7,0,2.2,1};
	double max;
	max = maxbul(dizi,5);
	printf("max deger : %f",max);
	return 0;
}
double maxbul(double array[],int size)
{
	double *ptr,max=0.0;
	int i;
	ptr = array;
	for(i=0;i<size;i++)
	{
		if(*ptr>max){
			max = *ptr ;
		}
		
		*ptr++ ;
	}
	
	return max ;
}
