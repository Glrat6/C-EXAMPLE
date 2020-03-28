#include<stdio.h>
#include<math.h>
 double BisectionMethod();
int main(){
	
	printf("%f",BisectionMethod() ); // BisectionMethod fonksiyonunun ��kt�s�n� ekrana yazd�r�r.
	
	return 0;
}
double BisectionMethod()
{
	int a3,a2,a1,a0;
	float alt,ust,f1,f2,f3,x;
	float tolerans=0.0;

	
	printf("x3'lu terimin katsayisini giriniz: ",a3); // 3. dereceden denklemin katsay�lar� klavyeden al�n�r.
	 scanf("%d",&a3);
	printf("x2'li terimin katsayisini giriniz: ",a2);
	 scanf("%d",&a2);
	printf("x1'li terimin katsayisini giriniz: ",a1);
	 scanf("%d",&a1);
	printf("x0'li terimin katsayisini giriniz: ",a0);
	 scanf("%d",&a0);
	printf("Araligin alt degerini Giriniz:",alt); // Fonksiyonun s�rekli oldu�u aral���n alt de�eri al�n�r.
	 scanf("%f",&alt);
	printf("Araligin ust degerini Giriniz:",ust); // Hral���n �st de�erini al�r
	 scanf("%f",&ust);
	printf("tolerans degeri giriniz:",tolerans); // Hata pay� klavyeden al�n�r
	 scanf("%f",&tolerans);
 
         f1 = a3*pow(alt,3)+a2*pow(alt,2)+a1*pow(alt,1)+a0*pow(alt,0);     // Aral���n alt de�eri i�in y hesaplan�r
         f3 = a3*pow(ust,3)+a2*pow(ust,2)+a1*pow(ust,1)+a0*pow(ust,0);    //Aral���n �st de�eri i�in y hesaplan�r
         
         if(f1*f3<0) // E�er 2 de�erin �arp�m� 0 dan k���k ise k�k vard�r 
		 {
         	do{
         		 x= (alt+ust)/2;										// Alt ve �st degerin orta noktas� bulunur
                 f2 = a3*pow(x,3)+a2*pow(x,2)+a1*pow(x,1)+a0*pow(x,0);      // Orta nokta i�in y de�eri hesaplan�r
                 if(f1*f2<0) // Ba�lang�� noktas� ile orta nokta araas�nda k�k olup olmad��� kontrol edilir
                 {
                 	ust=x;  // K�k var ise orta noktam�z �st de�ere atan�r ba�lang�� noktam�z ve orta noktam�z aras�nda k�k de�eri aran�r
                 	f3=f2;
				 }
				 else
				 {
				 	alt=x; // De�ilse ba�lang�� noktam�za orta noktay� atar�z orta de�er ile �st de�er aras�nda k�k arar�z
				 	f1=f2;
				 }               // S�rekli orta nokta bulma i�lemi while i�inde  0 de�erine ula�ana dek veya belirledi�imiz tolerans aral���na yakla�ana kadar devam eder
			
	    	 } while(fabs(f2)>tolerans);  // S�rekli b�l�nen de�er x'e atand���ndan de�i�keni x olan f2 fonksiyou mutlak de�er i�ine al�n�r. hata pay� ile k�yaslan�r
        } else
        printf("\nkOK YOKTUR!\n"); // Belirtilen aral�kta k�k de�eri yoksa ekrana k�k yoktur yazd�r�r.
        
      return x; // Fonksiyon main'e k�k de�erini d�nd�r�r.
}
