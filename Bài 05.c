#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	float top,bottom,height,S;
	printf("nhap day lon,nhap day nho,nhap chieu cao");
	scanf("%f%f%f",&top,&bottom,&height);
	S=(top+bottom)*height/2;
	printf("dien tich hinh thang la %.2f\n",S);
	
	return 0;
}
