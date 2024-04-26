#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
			scanf("%d", &choose);
			if(choose <= numberOfChoose && choose > 0){
				check = 0;
			}else{
				printf("\nInvalid data, please re-enter: ");
			}		
		}while(check == 1);
	return choose;
}
int factorial(int n){
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int isStrong(int n){
    int original = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    if (sum == original)
        return 1;
    else
        return 0;
}
void printStrongNumbers(int start, int end){
    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrong(i))
            printf("%d\n", i);
    }
}

int octalToDecimal(int octalNum) {
    int decimalNum = 0, i = 0, remainder;
    while (octalNum != 0) {
        remainder = octalNum % 10;
        octalNum /= 10;
        decimalNum += remainder * pow(8, i);
    
        ++i;
    }
    return decimalNum;
}
int *generateArray(int n, int min, int max) {
    int *arr = (int *) malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % (max - min + 1)) + min;
    }
    return arr;
}

void displayArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

double calculateAverage(int *arr, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main(){
	int start, end;
	int octalNum;
	int n = 10;
    int min = 1;
	int max = 100;
    int *arr = generateArray(n, min, max);
    double average;
	while(true){
	printf("\n----- MENU -----\n1. Prints all strong numbers between two numbers\n2.  convert a octal number to decimal\n3. accepting an array, min, max value and n elements.\nThe values of the array will be random between the min and max value\n4. Exit.\nPlease enter your choice: ");
	int choose = checkChoose(4);
	switch(choose){
		case 1:
    		printf("Enter start number: ");
    		scanf("%d", &start);
    		printf("Enter end number: ");
    		scanf("%d", &end);
    		printStrongNumbers(start, end);
			break;
		case 2:
			
    		printf("Enter an octal number: ");
    		scanf("%d", &octalNum);
    		printf("Decimal equivalent: %d", octalToDecimal(octalNum));
			break;
		case 3:
			
    		printf("Generated array:\n");
    		displayArray(arr, n);
    		average = calculateAverage(arr, n);
    		printf("Average of elements in array: %.2f\n", average);
    		free(arr);
			break;
		case 4:
			exit(0);
			break;
		}
	}
}

