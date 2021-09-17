#include<iostream>
using namespace std;

int main(){
	int i;
	cin>>i;
	int x=2;
	while(i>x){
		if(i%x==0){
			cout<<x<<" ";
			i/=x;	
		}
		 else x++;
	}
	cout<<
}
