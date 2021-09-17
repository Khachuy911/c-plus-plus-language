#include<iostream>
using namespace std;
#define N 100


void xuat(int arr[]){
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
}


int tinh(int arr[][N],int m ,int n){
	int sum=0;
	for(int i=0;i<m;i++){
				sum+=arr[i][i];
	}
	return sum;
}
//void xoay(int arr[],int k){
//	while(k>0){
//	int x=arr[0];
//		for(int i=0;i<5;i++){
//			arr[i]=arr[i+1];
//		}
//		arr[4]=x;
//		k--;
//	}
//	xuat(arr);
//}

void xoay(int arr[],int k){
	int arrnew[100];
	for(int i=0;i<5;i++){
		arrnew[(i+k)%5]=arr[i];
	}
	
	xuat(arrnew);
}

int main(){
	int m,n;
	int arr[5]={1,2,3,4,5};
//	cout<<tinh(arr,m,n);
	xoay(arr,4);
}
