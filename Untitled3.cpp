#include <iostream>
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

int soNguyenTo(int x){
	if(x<2)
	 return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)
		   return 0;
	}
	return 1;
}
	
void xoa(int arr[],int &n,int v){
	for(int i=v;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
}

void kiemTra(int arr[],int n){
	for(int i=0;i<n;i++){
		if(soNguyenTo(arr[i])){
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
	kiemTra(arr,n);

}
