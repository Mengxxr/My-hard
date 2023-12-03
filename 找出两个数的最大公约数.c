#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int r=0;  
	//Õ·×ªÏà³ý·¨ 
	while(m%n){
		r=m%n;
		m=n;
		n=r;
	}
	printf("%d",r);
	return 0;
}
