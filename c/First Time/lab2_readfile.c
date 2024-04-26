#include <stdio.h>
#include <stdlib.h>
int main (){
	char filepath[100];
	FILE *fp;
	char c;
    
    printf("Enter the file name: ");
    scanf("%s", filepath);
    
    // Open the file in read-only mode
    fp = fopen(filepath, "r");
    
        
     if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    // Read and display the contents of the file
    printf("The contents of the file are:\n");
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
	fclose(fp);						    
    
}
