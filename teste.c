#include <stdio.h>

int main(){

	char ch;
	FILE* teste = fopen("teste2.txt", "w");

	printf("Testing");
	printf("Another");
	//ch = fgetc(teste);
	//printf("%c", ch);
	
	fprintf("%c", ch);
	
	fclose(teste);
	return 0;
}
