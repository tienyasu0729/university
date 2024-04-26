#include <stdio.h>
 
main() {
	FILE *file;
	char fileName[255];
	printf("Enter your File name: ");
	scanf("%s", &fileName);
	file = fopen(fileName, "r");
	printf("File content: ");
	while (fscanf(file, "%s") != EOF) {
      printf("%s ", fileName);
   }
   fclose(file);
}

