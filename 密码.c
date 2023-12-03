#include<stdio.h>
int main(){
	int i=0;
	char passport[20]={0};
	for(i=0;i<3;i++){
		scanf("%s",passport);
		if(strcmp(passport,"123456")==0){
			printf("登录成功\n");
			break;
		}
		else{
			printf("ERROR\n");
		} 
	}
	if(i==3){
		printf("三次均输入错误，退出程序");
	}
	return 0;
} 
