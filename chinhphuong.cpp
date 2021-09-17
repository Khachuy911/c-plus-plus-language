#include<iostream>
#include<math.h>
using namespace std;


#include<iostream>
#include<math.h>
using namespace std;
void nhapmang(int arr[], int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void xuatmang(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i] <<" ";
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
int xoa(int arr[], int &n, int vitri){
	for(int i=vitri;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
}
int kiemtra(int arr[], int n){
	for(int i=0;i<n;i++){
		if(soNguyenTo(arr[i]))
		    {
		    	xoa(arr,n,i);
		    	i--;
			}
	}
	xuatmang(arr,n);
}
int main ( )
{  
    int n, arr[50];
    cin>>n;
    nhapmang(arr,n);
    kiemtra(arr,n);
return 0;
}


