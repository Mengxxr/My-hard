#include<stdio.h>
#include<windows.h>
int main(){
	char arr1[]="XXR I Like You";
	char arr2[]="##############";
	int left=0;
	int right=sizeof(arr1)/sizeof(arr1[0])-2;//∞—–±∏‹0ºı»• 
	int i=1;
	for(i=1;i<10;i++){
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//∆¡ƒªœ‘ æ–›œ¢“ª√Î 
		system("cls"); //∆¡ƒª«Â≥˝÷∏¡Ó 
		left++;
		right--;
	} 
	return 0;
}
