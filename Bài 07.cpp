#include<stdio.h>

int main(void)
{
	float r,a,b,c,dthinhtron,cvhinhtron,dthinhvuong,cvhinhvuong,dthinhchunhat,cvhinhchunhat;
		printf("nhap ban kinh,nhap canh hinh vuong,nhap chieu dai hcn,nhap chieu rong hcn");
		scanf("%f%f%f%f",&r,&a,&b,&c);
	dthinhtron=3.14*r*r;
		printf("dien tich hinh tron la %.2f\n",dthinhtron);
	cvhinhtron=2*3.14*r;
	    printf("chu vi hinh tron la %.2f\n",cvhinhtron);
	dthinhvuong=a*a;
	    printf("dien tich hinh vuong la %.2f\n",dthinhvuong);
	cvhinhvuong=4*a;
	    printf("chu vi hinh vuong la %.2f\n",cvhinhvuong);
	dthinhchunhat=b*c;
	    printf("dien tich hcn la %.2f\n",dthinhchunhat);
    cvhinhchunhat=(b+c)*2;
	    printf("chu vi hcn la %.2f\n",cvhinhchunhat);
	return 0;
	
		
	
}
