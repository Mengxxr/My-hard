#include<stdio.h>
int main(){
	int arr[]={1,5,6,8,9,1,5,10,11,12};
	int max=arr[0];
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
