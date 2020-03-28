#include <stdio.h>
void  fonksiyon(char dizi[],char dizi2[]);
int main()
{   
	char array[10]="mevsim";
	char array2[10]="bahar";
	fonksiyon(array,array2);
	
	return 0;
}

void  fonksiyon(char dizi[],char dizi2[])
{
	char *ptr1,*ptr2,*ptr;
	char dizi3[10];
	ptr1=dizi;
	ptr2=dizi2;
	ptr=dizi3;
	for(int i=2;i<20;i++)
	{
		dizi3[i]=dizi[i];
		
		ptr1++;
		ptr2++;
		ptr++;
			printf("%c",*ptr);
	}
	
}
