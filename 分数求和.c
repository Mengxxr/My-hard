#include<stdio.h>
int main(){
	int i=0;
	double sum=0.0;
	for(i=1;i<=100;i++){
		if(i%2!=0)//或者int flag,让flag每回的结果都等于它的相反数 
		sum+=1.0/i;//sum=flag*1.0/i;
		else
		sum-=1.0/i;
		//flag=-flag; 
	}
	printf("%lf",sum);
}
