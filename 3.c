#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	if(num % 2 ==0){
		printf("Par\n");
	} else {
		printf("Impar\n");
	}
	
	system ("pause");
}
