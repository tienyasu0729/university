#include<stdio.h>

//int checkChoose(int numberOfChoose){
//	int choose = 0;
//	int check = 1;
//	do{
//			scanf("%d", &choose);
//			if(choose <= numberOfChoose || choose < 0){
//				check = 0;
//			}else{
//				printf("\nWrong data entered, please re-enter: ");
//			}		
//		}while(check == 1);
//	return choose;
//}

//int checkChoose(int numberOfChoose){
//	int choose;
//	int check = 1;
//	do{
//			int tryCatch = scanf("%d", &choose);
//			if(tryCatch != 1){
//				printf("\nWrong data entered, please re-enter: ");
//			}else{
//					if(choose <= numberOfChoose || choose < 0){
//					check = 0;
//				}else{
//					printf("\nWrong data entered, please re-enter: ");
//				}		
//			}	
//		}while(check == 1);
//	return choose;
//}

int checkChoose(int numberOfChoose){
	here:
	int choose;
	int check = 1;
			int tryCatch = scanf("%d", &choose);
			if(tryCatch != 1){
				printf("\naaaaaaaaaaaaaaaaa ");
				goto here;
			}else{
					if(choose <= numberOfChoose || choose < 0){
					check = 0;
				}else{
					printf("\nbbbbbbbbbbbbbbb ");
				}		
			}	
	return choose;
}

float checkInputFloat(){
	float input;
	int check = 1;
	do{
		scanf("%f",&input);
		if(input > 0){
				check = 0;
			}else{
				printf("\nWrong data entered, please re-enter: ");
			}			
	}while(check == 1);
	return input;
}

void calculatingFuelEconomy(){
	float time;
	float speed;
	float gas;
	printf("\n--- Calculating Fuel Economy ---\n");
	printf("How many minutes did you drive ? : ");
	time = checkInputFloat();
	printf("What was the average speed of the car during that time ? : ");
	speed = checkInputFloat();
	printf("How many gallons of gas did your car use ? : ");
	gas = checkInputFloat();
	printf("Your car averaged %.2f miles per gallon .\n", (float)((time/60)*speed)/gas);
}

void calculatingDistanceTraveled(){
	float radius;
	float revolutions;
	printf("\n--- Calculating Distance Traveled ---\n");
	printf("What is the radius of your tires, in inches ? : ");
	radius = checkInputFloat();
	printf("How many revolutions did your car's tires make ? : ");
	revolutions = checkInputFloat();
	printf("Your car traveled %.2f miles .\n", (float)(radius*6.28*revolutions)*(1.57828283/100000));
}
void revisedFuelEconomyCalculation(){
	int radius;
	int revolutions;
	float gas;
	printf("\n--- Revised Fuel Economy Calculation ---\n");
	printf("What is the radius of your tires, in inches ? : ");
	radius = checkInputFloat();
	printf("How many revolutions did your car's tires make ? : ");
	revolutions = checkInputFloat();
	printf("How many gallons of gas did your car use ? : ");
	gas = checkInputFloat();
	printf("Your car averaged %.2f miles per gallon .\n", (float)(radius*6.28*revolutions)*(1.57828283/100000)/gas);
}
int main(){
	int check = 1;
	while(check = 1){
	printf("\n--- MENU ---\n1 -  Calculating Fuel Economy\n2 -  Calculating Distance Traveled\n3 - Revised Fuel Economy Calculation\n");
	printf("moi ban nhap lua chon cua minh: ");
	int choose = checkChoose(3);
printf("%d",checkChoose(3));
		switch(choose){
			case 1: 
				calculatingFuelEconomy();
				break;
			case 2: 
				calculatingDistanceTraveled();
				break;
			case 3: 
				revisedFuelEconomyCalculation();
				break;
		}
	}		
}

