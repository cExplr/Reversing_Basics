#include<stdio.h>

int add(int x , int y);
int main(){

	int x = 2;
	int y = 3;
	int z = add(x,y);
	return 0;
}

int add(int x , int y){
	printf("Answer is %d\n",x+y);
	return x+y;
}
