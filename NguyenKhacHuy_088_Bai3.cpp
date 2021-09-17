#include<iostream>
#include<math.h>
using namespace std;

void nhap(float &x, float &n){
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
}
 
int tinh(float x, float n){
	float bt;
	nhap(x,n);
	if(x>=2 && n>=2){
		bt = n*n + pow(fabs(x + sin(x)),2);
	}else if(x>=0 && n>=0 && x<2 && n<2){
		bt = n/3 + 2*n +pow(x,3) + sqrt(x*x);
	}else 
		bt = n + (1+n)/3 + (1+x)/2 + (2+x)/4;
	return bt;
}

int main(){
	float x,n;
	cout<<"Ket Qua la: "<<tinh(x,n);
	
}
