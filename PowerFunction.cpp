#include<stdio.h>

 int kuvvetHesapla(int sayi,int kuvvet);
 int main()
 { 
 int a,b,power;
 
 printf("bir sayi giriniz : ",a);
 scanf("%d",&a);
 printf("bir kuvvet giriniz : ",b);
 scanf("%d",&b);
 power = kuvvetHesapla(a,b);
 printf("kuvveti alinan sayi : %d",power);
 
 	return 0;
 }
  int kuvvetHesapla(int sayi,int kuvvet)
  {
  	int i=0 , tut=1 ;
  	
    for(i=0;i<kuvvet ;i++)
   		 tut = tut * sayi ;  

  return tut ; 
  }
