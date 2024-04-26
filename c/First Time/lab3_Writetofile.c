#include <stdio.h>
#include <stdlib.h>
int main (){
	char str[100];
	FILE *fp;
	char c;
    // Prompt the user to enter contents
    printf ("input the contents:");
    fgets(str,sizeof(str),stdin);
    
	// Open the file in write mode
    fp=fopen("datafile.txt","w");
	
   
     if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }
	// Write the contents to the file
    fprintf (fp,"%s",str);

	fclose(fp);						    
}
