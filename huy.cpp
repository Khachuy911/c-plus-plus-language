#include<iostream>
#include<math.h>
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

void sx(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				int tmp=arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
			}
		}
	}
}

int snt(int n){
	if(n==0 || n==1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
		return 1;
}

void chen(int arr[],int &n,int k,int x){
	for(int i=n;i>=k;i--){
		arr[i+1]=arr[i];
	}
	n++;
	arr[k]=x;
}

int main(){
	int arr[100],n,x;
	cin>>n;
	cin>>x;
	nhap(arr,n);
	if(snt(x)){
		chen(arr,n,1,x);
	}
	sx(arr,n);
	xuat(arr,n);
}
