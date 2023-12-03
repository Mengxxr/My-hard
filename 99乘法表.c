echo "# My-hard" >> README.md
  git init
  git add README.md
  git commit -m "first commit"
  git branch -M main
  git remote add origin https://github.com/Mengxxr/My-hard.git
  git push -u origin main
#include<stdio.h>
int main(){
	int i=0,j=0;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%-2d ",j,i,i*j);//-2d±íÊ¾×ó¶ÔÆë 
		}
		printf("\n");
	}
}
