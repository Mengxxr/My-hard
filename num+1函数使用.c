#include<stdio.h>
void numadd1(int *x){
	(*x)++;
}
int main(){
	int num=2;
	numadd1(&num);
	//只要调用就+1 
	printf("%d",num);
	return 0;
}
