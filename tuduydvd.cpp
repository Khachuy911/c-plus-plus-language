#include<iostream>
using namespace std;

int main(){
	int n;
	float money;
	cin>>n;	
	if(n>10){
		money = (n*5000) - ((n*5000)*(0.1));
	} else
		money = n*5000;
	cout<<money;
}
