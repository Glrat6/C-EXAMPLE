#include<stdio.h>
#include<math.h>

int BasamakSayisiniBul(int sayi);
int MaxCarpaniBul(int BasamakSayisi);
int TersSayisiBul(int sayi, int MaxCarpan);

int main(){
	
	
	int sayi,basamak,carpan;
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	
	 int basamak_sayisi = BasamakSayisiniBul(sayi);
     int mx_carpan = MaxCarpaniBul(basamak);
     int ters_sayi = TersSayisiBul(sayi, carpan);
     
     
      if(sayi==ters_sayi)
      	printf("sayi palindromdur \n");
	  
	  else{
	  	  	
	  	printf("sayi palindrom degildir \n");
	  }
	return 0;
}
int BasamakSayisiniBul(int sayi)
{
int temp = 0;

while(sayi !=0){
	sayi = sayi / 10;
	temp++;

}

return temp;
}
int MaxCarpaniBul(int BasamakSayisi)
{ int basmak;
 return pow(10,basmak);
}
int TersSayisiBul(int sayi, int MaxCarpan)
{
int temp =0;
while(sayi !=0){
	temp = temp +(sayi%10)*MaxCarpan;
	sayi = sayi / 10 ;
	MaxCarpan = MaxCarpan / 10;
}
return temp;
}
