#include<iostream>
using namespace std;

int giaiThua(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}

int main(){
	int n;
	cin>>n;
	cout<<giaiThua(n);
}
