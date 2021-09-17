#include<iostream>
#include<math.h>
using namespace std;

void nhap(int a[],int &n){
	cout<<"Nhap n: ";
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuat(int a[],int n){
	cout<<"\nMang la: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
bool scp(int n){
	int b = int(sqrt(n));
	if(b*b == n){
		return true;
	}
	return false;
}
void ktra(int a[],int n){
	cout<<"\nVi tri cua so chinh phuong la: ";
	for(int i=0;i<n;i++){
		if(scp(a[i])){
			cout<<i<<" ";
		}
	}
}

void sumChan(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		int b=a[i];
		while(a[i]>=10){
			a[i]/=10;
		}
		if(a[i]%2==0){
			sum+=b;
		}
	}
	cout<<"\nTong cac gia tri co chu so dau tien la chu so chan trong mang la: "<<sum;
}

int main(){
	int a[100];
	int n;
	nhap(a,n);
	xuat(a,n);
//	ktra(a,n);
	sumChan(a,n);
}
