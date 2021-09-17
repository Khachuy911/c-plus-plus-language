#include<iostream>
#include<math.h>
using namespace std;
void Nhap(int &n){
	do{
		cout<<"Nhap n:";
		cin>>n;
	}while(n<1);
}
float dequi(int n){
	if(n==1){
		return (float)1/2;
		
	}else return (float)n/(n+1)+dequi(n-1);
}
int main(){
	int n;
	Nhap(n);
	cout<<"gia tri bieu thuc la:"<<dequi(n);
	return 0;
}
