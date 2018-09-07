#include<stdio.h>

int main(){
	int num=0;
	printf("Please insert magic number : ");
	scanf("%d",&num);
	if(num != 382341){
		printf("WRONG NUMBER\nTRY AGAIN\n");
	}else{
		printf("Good Job!");
	}
	return 0;
}
