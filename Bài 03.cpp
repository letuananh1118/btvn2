#include <stdio.h>
#include <conio.h>
main(){
double num1,num2;
printf("Nhap so num 1,Nhap so num 2 :");
scanf("%lf%lf", &num1,&num2);
printf("Tong 2 so do la: %.0lf", num1+num2);
printf("Hieu 2 so do la: %.0lf",num1-num2);
printf("tich 2 so do la: %.0lf",num1*num2);
printf("Thuong 2 so do la: %6f",num1/num2);
getch();
}

