#include<stdio.h>
#include<string.h>

int main(){
	
	char str[20];
	int cont;
	
	fflush(stdin);
	gets(str);
	fflush(stdin);
		
	cont=strlen(str);
	
	while (cont!=-1){
		printf("%c",str[cont]);
		cont--;
	}
	
	return 0;
}
