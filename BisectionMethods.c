// Bisection Methodu ile 3. dereceden denklemlerin kök değerini hesaplar.

#include<stdio.h>
#include<math.h>
 double BisectionMethod();
int main(){
	
	printf("%f",BisectionMethod() ); // BisectionMethod fonksiyonunun çıktısını ekrana yazdırır.
	
	return 0;
}
double BisectionMethod()
{
	int a3,a2,a1,a0;
	float alt,ust,f1,f2,f3,x;
	float tolerans=0.0;

	
	printf("x3'lu terimin katsayisini giriniz: ",a3); // 3. dereceden denklemin katsayıları klavyeden alınır.
	 scanf("%d",&a3);
	printf("x2'li terimin katsayisini giriniz: ",a2);
	 scanf("%d",&a2);
	printf("x1'li terimin katsayisini giriniz: ",a1);
	 scanf("%d",&a1);
	printf("x0'li terimin katsayisini giriniz: ",a0);
	 scanf("%d",&a0);
	printf("Araligin alt degerini Giriniz:",alt); // Fonksiyonun sürekli olduğu aralığın alt değeri alınır.
	 scanf("%f",&alt);
	printf("Araligin ust degerini Giriniz:",ust); // Hralığın üst değerini alır
	 scanf("%f",&ust);
	printf("tolerans degeri giriniz:",tolerans); // Hata payı klavyeden alınır
	 scanf("%f",&tolerans);
 
         f1 = a3*pow(alt,3)+a2*pow(alt,2)+a1*pow(alt,1)+a0*pow(alt,0);     // Aralığın alt değeri için y hesaplanır
         f3 = a3*pow(ust,3)+a2*pow(ust,2)+a1*pow(ust,1)+a0*pow(ust,0);    //Aralığın üst değeri için y hesaplanır
         
         if(f1*f3<0) // Eğer 2 değerin çarpımı 0 dan küçük ise kök vardır 
		 {
         	do{
         		 x= (alt+ust)/2;										// Alt ve üst degerin orta noktası bulunur
                 f2 = a3*pow(x,3)+a2*pow(x,2)+a1*pow(x,1)+a0*pow(x,0);      // Orta nokta için y değeri hesaplanır
                 if(f1*f2<0) // Başlangıç noktası ile orta nokta araasında kök olup olmadığı kontrol edilir
                 {
                 	ust=x;  // Kök var ise orta noktamız üst değere atanır başlangıç noktamız ve orta noktamız arasında kök değeri aranır
                 	f3=f2;
				 }
				 else
				 {
				 	alt=x; // Değilse başlangıç noktamıza orta noktayı atarız orta değer ile üst değer arasında kök ararız
				 	f1=f2;
				 }               // Sürekli orta nokta bulma işlemi while içinde  0 değerine ulaşana dek veya belirlediğimiz tolerans aralığına yaklaşana kadar devam eder
			
	    	 } while(fabs(f2)>tolerans);  // Sürekli bölünen değer x'e atandığından değişkeni x olan f2 fonksiyou mutlak değer içine alınır. hata payı ile kıyaslanır
        } else
        printf("\nkOK YOKTUR!\n"); // Belirtilen aralıkta kök değeri yoksa ekrana kök yoktur yazdırır.
        
      return x; // Fonksiyon main'e kök değerini döndürür.
}
