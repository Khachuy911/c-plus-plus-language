#include<iostream>
#include<math.h>
using namespace std;

void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<< "arr["<<i<<"]=";
		cin>> arr[i];
	}
}

void xuat(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<< arr[i]<<" ";
	}
}

void filter(int arr[],int n,int x){
	int count=0,sum=0;
	cout<<"So vi tri xuat hien la: ";
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			count++;
			cout<<i;
			sum+=arr[i];
		}
	}
	if(count !=0){
	cout<<endl;
	cout<<x<<" xuat hien "<<count<<" lan";
} 	
	if(count==0){
	cout<<endl;
	cout<<x <<" khong co trong mang!";
	}
	cout<<"\nTong cac so "<<x<<" trong mang la: "<<sum;
}

void min_x(int arr[],int n,int x){
	int a=1;
	int min=x;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			a++;
		}
	}
	cout<<x<<" la so nho thu "<<a<<" trong mang";
}
int main(){
	int n, arr[100],x;
	cout<<"nhap n: ";
	cin>>n;
	nhap(arr,n);
	xuat(arr,n);
	cout<<"\nnhap x: ";
	cin>>x;
//	filter(arr,n,x);
	min_x(arr,n,x);
}










































//
//void nhap(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<< "arr["<<i<<"]=";
//		cin>> arr[i];
//	}
//}
//
//void xuat(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<< arr[i]<<" ";
//	}
//}
//
//void ghep(int arr[],int brr[],int crr[],int n,int m){
//	int x=0;
//	for(int i=0;i<n;i++){
//		if(arr[i]%2==0)
//		crr[x]=arr[i];
//		x++;
//		}
//	for(int j=0;j<m;j++){
//		if(brr[j]%2==0)
//		crr[x]=brr[j];
//		x++;
//	}
//
//}
//
//int main(){
//	int arr[100],n,m,brr[100],crr[100];
//	cout<<"nhap n= ";
//	cin>>n;
//	cout<<"nhap m= ";
//	cin>>m;
//	nhap(arr,n);
//	nhap(brr,m);
//	xuat(arr,n);
//	cout<<endl;
//	xuat(brr,n);
//	int x=m+n;
//	cout<<endl;
//	ghep(arr,brr,crr,n,m);
//	xuat(crr,x);
//}
































//bai10:lap
//bool snt(int a){
//	if(a==0 || a==1){
//		return false;
//	}
//	for(int i=2;i<=sqrt(a);i++){
//		if(a%i==0)
//		return false;
//	}
//	return true;
//}
//void tsnt(int a){
//	if(!snt(a)){
//		int i=2;
//		cout<<a<<"=";
//		while(a>0){
//			while(a%i==0){
//			a/=i;
//			cout<<i<<" ";
//		}
//		i++;
//		}
//		
//	}
//}
//
//int main(){
//	tsnt(20);
//}

































//bai9:lap
//bool SNT(int a){
//	if(a==0 || a==1){
//		return false;
//	}
//	for(int i=2;i<=sqrt(a);i++){
//		if(a%i==0)
//		return false;
//	}
//	return true;
//}
// int main(){
// 	int sum=0;
// 	for(int i=0;i<10;i++){
// 	if(SNT(i)){
// 		sum+=i;
//	 }
//	}
//	cout<<"KQ= "<<sum;
//}
