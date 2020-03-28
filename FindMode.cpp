#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void myMode(const int *,const int ,int *);

int main()
{
	int myArray[]={2,1,1,1,1,1,11,4,4,4,5,5,7,9};
	int result;
	myMode(myArray,8,&result);
	printf("MOD : %d\n",result);
}
void myMode(const int *param1,const int boyut,int *param2)
{
	int dizi[20]={0};
	int deger=dizi[0],gecici;
     for(int i=0;i<boyut;i++,*param1++)
     {
     	dizi[*param1]++;
	 }
        for(int i=0;i<20;i++)
        {
        	if(dizi[i]>deger)
        	{
        		deger=dizi[i];
        	    gecici=i;
        		
			}
        	
		}
		*param2=gecici;
}
