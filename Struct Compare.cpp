#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int myStructCompare(const struct simpleStruct *,const struct simpleStruct *);

struct simpleStruct{
	int m1;
	char m2;
	float m3;
};

int main()
{
	struct simpleStruct myStruct1,myStruct2;
	
	myStruct1.m1=10;
	myStruct1.m2='a';
	myStruct1.m3=2.3;
	
	myStruct2.m1=10;
	myStruct2.m2='a';
	myStruct2.m3=2.3;
	
	if(myStructCompare(&myStruct1,&myStruct2))
		printf("ELEMANLARI AYNIDIR");
	else 
		printf("ELEMANLARI AYNI DEGILDIR.");
	
}
int myStructCompare(const struct simpleStruct *param1,const struct simpleStruct *param2)
{
  if(param1->m1==param2->m1&&param1->m2==param2->m2&&param1->m3==param2->m3)
  {
  	return 1;
  }else
  return 0;
	
}

















