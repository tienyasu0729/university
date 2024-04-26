#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int menu();
int tinhPTBH(float a,float b, float c );
int tinhTien(float d, float r, float n); 
int main (){
	int luachon; 
	float d,r,n,a,b,c; 
	luachon = menu();
	nhaplai: 
	printf("Nhap vao lua chon: ");
	scanf("%d", &luachon);
	switch(luachon){
		case 1:
			do{
			printf("a = \n");
			scanf("%d", &a);
			printf("b = \n");
			scanf("%d", &b);
			printf("c = ");
			scanf("%d", &c);
			if (tinhPTBH(a,b,c)==1)
				printf("x1 = x2 = %f", tinhPTBH(a,b,c));
			else if(tinhPTBH(a,b,c)==2)
				printf("x1 = %f \n x2= %f", tinhPTBH(a,b,c));
			else 
				printf("Phuong trinh vo nghiem");
				}while(a != 0);
			break; 
		case 2:  
					printf("aaaaaaaa4");

			printf ("Lai sau %f nam la %f",tinhTien(d,r,n));
			break;
		case 3:
						printf("aaaaaaaa2");

			exit (0);
		defalt:
			printf("Nhap sai. Nhap lai ");
			goto nhaplai; 
}
} 
int menu(){
	int luachon;
	printf("1- Quadratic equation(ax^2 + bx + c =0)\n");
	printf("2- Bank deposit problem.\n");
	printf("3- Quit \n");
	return luachon; 
}  
int tinhPTBH(float a,float b, float c ){
	float delt, x1,x2; 
	delt = b*b - 4 *a*c ;
	if (delt == 0){
		x1 = x2 = -b/2*a; 
		return 1;} 
	else if (delt >0 ) {
		x1 = (-b - sqrt(delt))/2*a ;
		x2 = (-b + sqrt(delt))/2*a;
		return 2;}
	return 0; 
}
int tinhTien(float d, float r, float n){
	float p;
	while (d> 0 && n > 0 && r> 0 && r< 1.0){
		printf("Nhap vao so tien gui : "); 
		scanf("%f", &d);
		printf("Nhap vao lai suat: ");
		scanf("%f",&r);
		printf("Nhap vao nam gui : ");
		scanf("%f", &n);}
	p = pow(d*(1+d),n);
	return p; 
}
