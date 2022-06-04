#include<stdio.h>

int main(void)
{
    float toan,ly,hoa,sum,avg;
    printf("nhap diem toan,nhap diem ly,nhap diem hoa");
    scanf("%f%f%f",&toan,&ly,&hoa);
    sum=toan+ly+hoa;
    printf("tong 3 mon la %.2f",sum);
    avg=sum/3;
    printf("trung binh 3 mon la %.2f",avg);
    return 0;
}
    
