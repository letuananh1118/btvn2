#include <stdio.h>

int main(void)
{
	float c,f;
	printf("Nhap vao do C: ");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("%.2f do C bang %.2f do F",c,f);
	return 0;
}
