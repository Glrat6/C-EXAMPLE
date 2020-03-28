#include<stdio.h>
#include<math.h>

float fonk(float array[],int size);
int main()
{
	float dizi[]={1,2,3,4,5,6,7,8,9,10};
	float ss;
	ss = fonk(dizi,10);
    printf("dizinin standart sapmasi : %f",ss);
	return 0 ;
}
float fonk(float array[],int size)
{
	float ort=0,ss=0,toplam1=0,toplam2=0;
	int i, j;
		for(i=0;i<size;i++)
	{
		toplam1 += array[i];
	}
	ort = toplam1/size;
    printf("dizinin ortalamasi : %f\n",ort);
    
	for(j=0;j<size;j++)
	{
		toplam2 += pow((array[j]-ort),2);
	}
	ss=pow((toplam2/(size-1)),0.5);
	
	return ss;
} 
