#include<iostream>
using namespace std;
#define N 100
int nhapn(){
	int n;
	do{
		cout<<"nhap n: ";
		cin>>n;
	}while(n< 1 || n>30);
	return n;
}

void nhap(float a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuat(float a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void remove(float a[],int &n,int v){
	for(int i=v;i<n;i++){
		a[i]= a[i+1];
	}
	n--;
}
void ghep(float a[],float b[],float c[],int n){
	int x=0,m=2*n;
	for(int i=0;i<n;i++){
		c[x]=a[i];
		x++;
	}
	for(int i=0;i<n;i++){
		c[x]=b[i];
		x++;
	}     
	for(int i=0;i<m;i++){    
			int x=c[i];
		for(int j=i+1;j<m;j++){
			if(x==c[j]){
				remove(c,m,j);
				j--;
			}
		}
	}

	xuat(c,m);
}
int main(){
	int n;
	float a[N],b[N],c[N];
	n = nhapn();
	nhap(a,n);
	nhap(b,n);
	ghep(a,b,c,n);
}
