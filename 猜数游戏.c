#include<stdio.h>
#include<time.h> 
void menu(){
	printf("�����������1���˳�����������0\n");
}
void game(){
	int ret=0;//����һ�������
	int guess=0;//�û�Ҫ�µ���
	ret=rand()%100+1;//����һ��1-100�������
	//������
	while(1){
		printf("��������Ҫ�µ�����:");
		scanf("%d",&guess);
		if(ret>guess){
			printf("��С��\n");
		} 
		else if(ret<guess){
			printf("�´���\n");
		}
		else{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	} 
}
int main(){
	int select;
	srand((unsigned)time(NULL));//���һ�������������
	//ʱ��һֱ�ڱ仯 
	do{
		menu();
		printf("��ѡ��");
		scanf("%d",&select);
		switch(select){
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("�������\n"); 
				break;
		}
	}while(select);
	return 0;
}
