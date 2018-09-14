#include <stdio.h>

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

	int tmp, tmp2;
	tmp  = 2 * secret;
	tmp2 = 4*53;

	if(  ( (tmp ^ 4395) + tmp2) == 1713347713 ){
		return 1;
	}
	return 0;
}
