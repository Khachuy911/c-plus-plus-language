#include<iostream>
using namespace std;

int nhap( int &n){
	do{
		cout<<"nhap n: ";
		cin>>n;
	}while(n>30 || n<1);
	return n;
}
void input(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void output(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
}
void filter(int *a,int n){
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0 && *(a+i)%3==0){
			cout<<*(a+i)<<endl;
			cout<<i;
		}
	}
}
void sort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(*(a+i)%2==0 && *(a+j)%2==0 && *(a+i)<*(a+j) || *(a+i) %2 !=0 && *(a+j)%2==0||  *(a+i) %2 !=0 && *(a+j)%2!=0 && *(a+i)<*(a+j) ){
				int tmp = *(a+i);
					*(a+i) = *(a+j);
					*(a+j) = tmp;
			}
		}
	}
}
void remove(int *a,int &n,int k){
	for(int i=k;i<n;i++){
		*(a+i) = *(a+i+1);
	}
	n--;
}
void removeLe(int *a,int &n){
	for(int i=0;i<n;i++){
		if(*(a+i)%2!=0){
			remove(a,n,i);
		}
	}
}
int main(){
	int n;
	int *a = new int [100];
	nhap(n);
	input(a,n);
	output(a,n);
	removeLe(a,n);
	output(a,n);
}
