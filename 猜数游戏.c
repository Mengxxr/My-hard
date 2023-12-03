#include<stdio.h>
#include<time.h> 
void menu(){
	printf("如果玩请输入1，退出程序请输入0\n");
}
void game(){
	int ret=0;//生成一个随机数
	int guess=0;//用户要猜的数
	ret=rand()%100+1;//生成一个1-100的随机数
	//猜数字
	while(1){
		printf("请输入你要猜的数字:");
		scanf("%d",&guess);
		if(ret>guess){
			printf("猜小了\n");
		} 
		else if(ret<guess){
			printf("猜大了\n");
		}
		else{
			printf("恭喜你，猜对了\n");
			break;
		}
	} 
}
int main(){
	int select;
	srand((unsigned)time(NULL));//设计一个随机数的种子
	//时间一直在变化 
	do{
		menu();
		printf("请选择：");
		scanf("%d",&select);
		switch(select){
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("输入错误\n"); 
				break;
		}
	}while(select);
	return 0;
}
