#include<stdio.h>
void Binarysearch(int x,int arr[],int sz){
	//���ݹ�ȥ����arr�����еĵ�һ��Ԫ�صĵ�ַ 
	int left=0;
	int right=sz-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(x>arr[mid])
			left=mid+1;
		else if(x<arr[mid])
			right=mid-1;
		else{
			printf("�ҵ����ǵ�%d��",mid);
			break;
		}
		if(left>right){
			printf("�����ڸ�����");
		}
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int n=7;
	Binarysearch(n,arr,sz);
}
