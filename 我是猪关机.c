#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main(){
	char input[20]={0};
	system("shutdown -s -t 60");//电脑系统操作 
again:
	printf("请注意，你的电脑将在一分钟后关机！！！\n");
	printf("如果输入“肖鑫锐是猪”，就取消关机\n请输入->"); 
	scanf("%s",&input);
	if(strcmp(input,"肖鑫锐是猪")==0){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	return 0;
} 
