#include<stdio.h>
#include<math.h>

void option2(){
	int money, month;
	float interest;
	printf("\n----- Bank deposit problem -----\n");
	printf("Enter your deposit amount: ");
	scanf("%d", &money);
	printf("Enter the number of months to deposit: ");
	scanf("%d", &month);
	do{
		printf("Enter the deposit interest rate: ");
		scanf("%f", &interest);
	}while( interest > 0.1);
	printf("Total amount received = %d\n", money + (money * interest * month));
}

void option1(){
	float a,b,c, denta;
	printf("\n----- Quadratic equation (Ax^2 + By + C) -----\n");
	printf("Enter A: ");
	scanf("%f", &a);
	printf("Enter B: ");
	scanf("%f", &b);
	printf("Enter C: ");
	scanf("%f", &c);
	denta = b * b - 4*a*c;
	if (denta < 0){
		printf("the equation has no solution.\n");
	}else {
		if (denta == 0){
			printf("Equation with double solution: X1 = X2 = %.2f\n", -b/ (2*a) );
		}else{
			printf("The equation has two solutions: X1 = %.2f and X2 = %.2f\n", (-b+ sqrt(denta)) / (2 * a), (-b - sqrt(denta)) / (2 * a) );
		}
	}
	
}

void menu(){
	int choose;
	do{
	printf("\n----- MENU -----\n1. Quadratic equation\n2. Bank deposit problem\n3. EXIT.\n");
	printf("Enter your choice: ");
	choose = checkChoose(3);
	switch(choose){
		case 1:
			option1();
			break;
		case 2:
			option2();
			break;
		case 3:
			exit(0);
			break;
	}
	}while(choose != 3);
	
}

int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
			scanf("%d", &choose);
			if(choose <= numberOfChoose && choose > 0){
				check = 0;
			}else{
				printf("Entered wrong, please re-enter: ");
			}		
		}while(check == 1);
	return choose;
}

int main(){
	
	menu();
}
