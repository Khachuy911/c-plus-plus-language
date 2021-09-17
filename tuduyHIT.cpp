#include<iostream>
using namespace std;

int bi(int n,int k){
	int count=0;
	for(int i=1;i<=n;i++){
		for(int j=1;i<=n;i++){
			if(i+j==k){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<bi(n,k);
}



trua Chu Nhat
