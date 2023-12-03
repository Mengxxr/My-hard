#include<stdio.h>
int main(){
	int i=1000;
	int count=0;
	for(i=1000;i<2001;i++){
		if(i%400==0 || i%4==0 &&i%100!=0){
			printf("%d ",i);
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
