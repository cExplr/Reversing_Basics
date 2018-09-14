#include<stdio.h>
#include<string.h>
int compareString(char secret[20], char magicWord[20]);

int main(){
	char magicWord[20];
	char secret[20] = "PWEEEEZZZ?";
	printf("Please input magic word: ");
	scanf("%s",magicWord);
	if(compareString(secret,magicWord)==0){
		printf("Good Job La!\n\n");
	}else{
		printf("Eh wrong sia!!\n\n");
	}

	return 0;

}

int compareString(char secret[20], char magicWord[20]){

	if (strcmp(secret,magicWord) == 0){
		return 0;
	}
	else{
		return 1;
	}

}
