#include<stdio.h>
main()
{	int sayi;
	printf("Sayi gir: "); scanf("%d",&sayi);
	if(sayi>1000) printf("Sayi 1000'den buyuktur");
	else 		  printf("Sayi 1000'den kucuktur");
	return 0;
}
