#include<stdio.h>
int main(){
	int a,b,c,max=0;
	int mid=0,min=0;
	printf("请输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c){
		max=a;
		if(b>c){
			mid=b;
			min=c;
		}
		else{
			mid=c;
			min=b;
		}
	}
	if(b>=c && b>=a){
		max=b;
		if(a>c){
			mid=a;
			min=c;
		}
		else{
			mid=c;
			min=a;
		}
	}
	if(c>=a && c>=b){
		max=c;
		if(a>b){
			mid=a;
			min=b;
		}
		else{
			mid=b;
			min=a;
		}
	}
	printf("%d %d %d",max,mid,min);
	return 0;
}
