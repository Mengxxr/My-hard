#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main(){
	char input[20]={0};
	system("shutdown -s -t 60");//����ϵͳ���� 
again:
	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ�������\n");
	printf("������롰Ф������������ȡ���ػ�\n������->"); 
	scanf("%s",&input);
	if(strcmp(input,"Ф��������")==0){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	return 0;
} 
