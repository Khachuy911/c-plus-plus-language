#include<iostream>
#include<math.h>
using namespace std;

void kiemTra(int x1,int x2 ,int x3, int y1,int y2, int y3){
	float d1,d2,d3;
	d1=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	d2=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
	d3=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
	if(d1+d2>d3 && d1+d3>d2 && d2+d3>d1){
		cout<<"YES";
	}
	else
	cout<<"NO";
}
int main(){
	int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	kiemTra(x1,x2,x3,y1,y2,y3);
}























#include<iostream>
#include<math.h>
#include<>
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

bool snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}

void chen(int arr[],int &n,int v,int s){
	for(int i=n-1;i>=v;i--){
		arr[i+1]=arr[i];
	}
	n++;
	arr[v]=s;
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


int main(){
	int arr[2000],n,x;
	cin>>n>>x;
	nhap(arr,n);
	if(snt(x)){
		chen(arr,n,3,x);
	}
	sx(arr,n);
	xuat(arr,n);
}
