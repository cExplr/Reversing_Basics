#include<stdio.h>

int checkSecret(int secret);
int main(){
	int secret = 0 ;

	printf("Please enter the secret key : ");
	scanf("%d",&secret);
	if(checkSecret(secret) == 1)
		printf("Congratulations! This is correct!\n");
	else{
		printf("Try Harder ... \n\n");
	}
	return 0;
}


int checkSecret(int secret){

	if((2*secret^4395+4*53 == 1713347713)){
		return 1;
	}
	return 0;
}
