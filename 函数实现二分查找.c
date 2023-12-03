#include<stdio.h>
void Binarysearch(int x,int arr[],int sz){
	//传递过去的是arr数组中的第一个元素的地址 
	int left=0;
	int right=sz-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(x>arr[mid])
			left=mid+1;
		else if(x<arr[mid])
			right=mid-1;
		else{
			printf("找到啦是第%d个",mid);
			break;
		}
		if(left>right){
			printf("不存在该数字");
		}
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int n=7;
	Binarysearch(n,arr,sz);
}
