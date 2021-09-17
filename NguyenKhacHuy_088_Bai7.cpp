#include<iostream>
#include<math.h>
using namespace std;

int tinh(int n){
	if(n==0){
		return 1;
	}else 
		return tinh(n-1) * (2*n +1);
}

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<tinh(n);
}
