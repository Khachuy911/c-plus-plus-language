#include<iostream>

using namespace std;

void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
}

void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void xoa(int arr[],int &n,int v){
	for(int i=v;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
int soHoanHao(int n){
	int s=0;	
	for(int i=1;i<n;i++){
		if(n%i==0)
		s+=i;	
	}
		if(s==n){
		    return 1;
		}else return 0;
}
void xoaSoHoanHao(int arr[],int n){
	for(int i=0;i<n;i++){
		if(soHoanHao(arr[i])){
			xoa(arr,n,i);
			i--;
		}
	}
	xuat(arr,n);
}

int main(){
	int arr[100],n;
	cin>>n;
	nhap(arr,n);
	xoaSoHoanHao(arr,n);
}
