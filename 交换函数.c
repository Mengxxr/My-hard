#include<stdio.h>
void swap(int *x,int *y){
	int tmp=0;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
int main(){
	int a=5;
	int b=2;
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
