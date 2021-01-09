// 3 sayýyý büyükten küçüðe doðru sýralayan C programý
#include<stdio.h>
main()
{	int s1,s2,s3,enbuyuk,orta,enkucuk;
	printf("1.sayi:"); scanf("%d",&s1);	
	printf("2.sayi:"); scanf("%d",&s2);
	printf("3.sayi:"); scanf("%d",&s3);
	// Ýlk olarak s1
	if((s1>s2) && (s1>s3)) 		enbuyuk=s1;
	else if((s1<s2) && (s1<s3)) enkucuk=s1;
	else 						orta=s1;
	// Sýra s2'de
	if((s2>s1) && (s2>s3)) 		enbuyuk=s2;
	else if((s2<s1) && (s2<s3)) enkucuk=s2;
	else 						orta=s2;	
	// Son olarak s3'de...
	if((s3>s2) && (s3>s1)) 		enbuyuk=s3;
	else if((s3<s2) && (s3<s1)) enkucuk=s3;
	else 						orta=s3;
	
	printf("En buyuk sayi:%d \n",enbuyuk);
	printf("Ortanca  sayi:%d \n",orta);
	printf("En kucuk sayi:%d",enkucuk);	
	return 0;
}
/*
 Konu linki:  www.bilgius.com/3-sayiyi-buyukten-kucuge-siralayan-program
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/

