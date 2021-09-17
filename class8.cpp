#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

 bai 8
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}


 bai 11
float tinh(int n, float x){
	float bieuthuc=0;
	if(n%2==0){
		for(int i=1;i<=n;i++){
		bieuthuc += (float)(pow(x,i)/(pow(3,(i-1))));
	}	
		return bieuthuc;
	} else 
		return bieuthuc;
}

bai 14
void bai14(int n,int m){
	int x,sumChanDuong=0,sumChanAm=0,sumLeDuong=0,sumLeAm=0;
	x=-n;
	for(int i=x;i<=m;i++){
		if(i%2==0 && i>0){
			sumChanDuong += i;
		}
		if(i%2==0 && i<0){
			sumChanAm +=i;
		}
		if(i%2!=0 && i>0){
			sumLeDuong +=i;
		}
		if(i%2!=0 && i<0){
			sumLeAm +=i;
		}
	}
	cout<<sumChanDuong<<endl;
	cout<<sumChanAm<<endl;
	cout<<sumLeDuong<<endl;
	cout<<sumLeAm <<endl;
}

int convert(float n){
	int x=n,a;
	float sum=x+0.5;
	if(n<sum){
		a = floor(n);
	}else {
		a =ceil(n);
	}
	return a;
}

void kiemtra(float d){
	char c;
	float a=ceilf(d*10)/10;
	if(a>=8.5){
		c='A';
	} else if(a>=7.0 && a<8.5){
		c='B';
	}
	else if(a>=5.5 && a<7.0){
		c='C';
	}
	else if(a>=4.0 && a<5.5){
		c='D';
	}
	else
	c='F';
	cout<<c;
}

int main(){
	
	float d;
	cin>>d;
	kiemtra(d);
//	cout<<convert(d);
//	int n,m;
//	float x;
//	cout<<"Nhap n,m: ";
//	cin>>n>>m;
//	if(snt(n)){
//		cout<<"YES";
//	}else
//		cout<<"NO";
//	cout<<tinh(n,x);
//	bai14(n,m);
}
