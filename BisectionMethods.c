#include<stdio.h>
#include<math.h>
 double BisectionMethod();
int main(){
	
	printf("%f",BisectionMethod() ); // BisectionMethod fonksiyonunun çýktýsýný ekrana yazdýrýr.
	
	return 0;
}
double BisectionMethod()
{
	int a3,a2,a1,a0;
	float alt,ust,f1,f2,f3,x;
	float tolerans=0.0;

	
	printf("x3'lu terimin katsayisini giriniz: ",a3); // 3. dereceden denklemin katsayýlarý klavyeden alýnýr.
	 scanf("%d",&a3);
	printf("x2'li terimin katsayisini giriniz: ",a2);
	 scanf("%d",&a2);
	printf("x1'li terimin katsayisini giriniz: ",a1);
	 scanf("%d",&a1);
	printf("x0'li terimin katsayisini giriniz: ",a0);
	 scanf("%d",&a0);
	printf("Araligin alt degerini Giriniz:",alt); // Fonksiyonun sürekli olduðu aralýðýn alt deðeri alýnýr.
	 scanf("%f",&alt);
	printf("Araligin ust degerini Giriniz:",ust); // Hralýðýn üst deðerini alýr
	 scanf("%f",&ust);
	printf("tolerans degeri giriniz:",tolerans); // Hata payý klavyeden alýnýr
	 scanf("%f",&tolerans);
 
         f1 = a3*pow(alt,3)+a2*pow(alt,2)+a1*pow(alt,1)+a0*pow(alt,0);     // Aralýðýn alt deðeri için y hesaplanýr
         f3 = a3*pow(ust,3)+a2*pow(ust,2)+a1*pow(ust,1)+a0*pow(ust,0);    //Aralýðýn üst deðeri için y hesaplanýr
         
         if(f1*f3<0) // Eðer 2 deðerin çarpýmý 0 dan küçük ise kök vardýr 
		 {
         	do{
         		 x= (alt+ust)/2;										// Alt ve üst degerin orta noktasý bulunur
                 f2 = a3*pow(x,3)+a2*pow(x,2)+a1*pow(x,1)+a0*pow(x,0);      // Orta nokta için y deðeri hesaplanýr
                 if(f1*f2<0) // Baþlangýç noktasý ile orta nokta araasýnda kök olup olmadýðý kontrol edilir
                 {
                 	ust=x;  // Kök var ise orta noktamýz üst deðere atanýr baþlangýç noktamýz ve orta noktamýz arasýnda kök deðeri aranýr
                 	f3=f2;
				 }
				 else
				 {
				 	alt=x; // Deðilse baþlangýç noktamýza orta noktayý atarýz orta deðer ile üst deðer arasýnda kök ararýz
				 	f1=f2;
				 }               // Sürekli orta nokta bulma iþlemi while içinde  0 deðerine ulaþana dek veya belirlediðimiz tolerans aralýðýna yaklaþana kadar devam eder
			
	    	 } while(fabs(f2)>tolerans);  // Sürekli bölünen deðer x'e atandýðýndan deðiþkeni x olan f2 fonksiyou mutlak deðer içine alýnýr. hata payý ile kýyaslanýr
        } else
        printf("\nkOK YOKTUR!\n"); // Belirtilen aralýkta kök deðeri yoksa ekrana kök yoktur yazdýrýr.
        
      return x; // Fonksiyon main'e kök deðerini döndürür.
}
