#include<iostream>
using namespace std;

//int giaithua(int n){
//	if(n==1){
//		return 1;
//	}else 
//		return giaithua(n-1)*n;
//}
//int tong(int n){
//	if(n==1){
//		return 1; 
//	}else
//		return tong(n-1)+n;
//}

//
//int fibonacci(int n){
//	if(n==1 || n==2){
//		return 1; 
//	}else 
//		return fibonacci(n-1) + fibonacci(n-2);
//}

int max(int n){  // tim max cua so n 12345-->5;
	if(n==0){
		return 0;
	}else
		return max(max(n/10),n%10);
}
int ans=1;
void gt(int n){
	if(n==1){
		cout<<ans;
	}else{
		ans*=n;
		gt(n-1);
	}
}

int sum=0;
void tong(int n){
	if(n==0){
		cout<<sum;
	}else {
		sum+=n;
		tong(n-1);
	}
}



int main(){
	int n;
	cin>>n;
	tong(n);
}
