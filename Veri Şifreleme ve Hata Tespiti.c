#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,islem=0,x,k=0,br=0,q,k2,tut,bas,top=0,y=0,s=-1;
	char sec,c;
   	printf("1.Sayi=");
 	scanf("%d",&a);
 	printf("2.Sayi=");
 	scanf("%d",&b);
 	printf("Operator(&-|-^-<->)=");
 	scanf("%s",&c);
 	if(c=='&')//Ve Ýþlemi 
 	{
 		islem=a&b;
 		printf("Sifrelenmis veri= %d\n",islem);
	}
    if(c=='|')// Veya Ýþlemi 
 	{
 		islem=a|b;
 		printf("Sifrelenmis veri= %d\n",islem);
	}
    if(c=='^')//XOR Ýþlemi
 	{
 		islem=a^b;
 		printf("Sifrelenmis veri= %d\n",islem);
	}
	if(c=='<')//Sola kaydýrma 
	{
		printf("1. Sayiyi kaydirmak icin '1'\n");
		printf("2. Sayiyi kaydirmak icin '2'\n");
		printf("Giriniz=");
		scanf("%d",&tut);
		printf("Kaydirilcak basamak sayisini giriniz=");
		scanf("%d",&bas);
		if(tut==1)
		{
			islem=a<<bas;
			printf("Sifrelenmis veri= %d\n",islem);
		}
		else
		{
			islem=b<<bas;
			printf("Sifrelenmis veri= %d\n",islem);
		}
	}
	if(c=='>') //Saða kaydýrma 
	{
		printf("1. Sayiyi kaydirmak icin '1'\n");
		printf("2. Sayiyi kaydirmak icin '2'\n");
		printf("Giriniz=");
		scanf("%d",&tut);
		printf("Kaydirilcak basamak sayisini giriniz=\n");
		scanf("%d",&bas);
		if(tut==1)
		{
			islem=a>>bas;
			printf("Sifrelenmis veri= %d\n",islem);
		}
		else if(tut==2)
		{
			islem=b>>bas;
			printf("Sifrelenmis veri= %d\n",islem);
		}
	}
	    x=islem;
 		q=x;
	while(x>0)//Sifrelenmiþ verideki 1 lerin sayýsýný bulma
	{
		k=x%2;
		x=x/2;
		if(k==1)
		{
			br+=1;
		}
		top+=1;
	}
	printf("Eslik kuralini belirtiniz(T-C)=");
	scanf("%s",&sec);
	if(sec=='T' && br%2==0)// Secim T ve 1lerin sayýsý çift ise 
	{
	    q<<=1;
		q+=1;     
	}
	else if(sec=='C' && br%2==0)//Secim Çift ve 1lerin sayýsý çift ise 
	{
		q<<=1;
	}
	else if(sec=='T' && br%2!=0)//Secim tek ve 1lerin sayýsý tek ise 
	{
		q<<=1;
	}
	else if(sec=='C' && br%2!=0)//Secim çift ve 1lerin sayýsý tek ise 
	{
		q<<=1;
		q+=1;
	}
	printf("%d\n",q);
	y=pow(2,top);
	while(top>s)
	{
			if(q&y)
	       {
	       	printf("1");
	       }
	      else
        	{   
	 	     printf("0");
	       }
	       y=y>>1;  
	       s++;
	}
	printf("\n");
	system("pause");
	return 0;
}
