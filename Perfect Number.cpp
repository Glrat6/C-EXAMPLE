#include<stdio.h>

int perfectFunction(int sayi);
int asalFind(int sayi);
int main()
{
	int a,perfect,asal;
	printf("bir sayi giriniz: ");
	fflush(stdout);
	scanf("%d",&a);
		perfect = perfectFunction(a);
		asal = asalFind(a);
	return 0;
}
int perfectFunction(int sayi)
{
	int i,sum=0;
	for(i=0;i<sayi;i++);
	{
		if(sayi%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==sayi)
	{
		printf("sayi mukemmel!\n");
	}else 
        printf("sayi mukemmel degil!\n");
    
	return 0;
}
int asalFind(int sayi)
{
	int i;
	for(i=2;i<sayi;i++)
	{
		if(sayi % i ==0)
		{
			printf("sayi asal degildir\n");
		}
	
	} 
	     
	return 0;
}
