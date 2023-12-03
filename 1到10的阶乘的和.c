#include<stdio.h>
int main(){
	int i=1,j=1;
	int sum=1,add=0;
	for(i=1;i<=10;i++){
		sum*=i;
		add+=sum;
	}
	printf("%d",add);
	return 0;
} 
