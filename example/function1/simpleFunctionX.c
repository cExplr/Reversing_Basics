#include<stdio.h>

int add(int x, int y);
int main(){

	int x = 3;
	int y = 4;

	int z = add(x,y);
	printf("%d",z);
}

int add(int x , int y){

	return x+y;
}
