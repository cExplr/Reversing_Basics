#include<stdio.h>

int add(int x, int y);
int main(){
	int x = 16;
	int y = 32;
	int z = add(x,y);
	printf("%d",z);
return 0;
}


int add(int x , int y){
	return x+y;
}
