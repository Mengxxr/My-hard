#include<stdio.h>
#include<math.h>
int main(){
	int i=100,j=2;
	for(i=100;i<=200;i++){//ÊÔ³ý·¨ 
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				break; 
			}
		}
		if(j>=sqrt(i))
		printf("%d ",i);
	}
	return 0;
}
