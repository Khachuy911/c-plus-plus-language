#include<iostream>
using namespace std;
#define N 100
void nhap(int arr[][N],int &c,int &d){
	cin>>d>>c;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
}
void xuat(int arr[][N],int c,int d){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void xuat(int arr[][N],int c,int d){
	for(int i=0;i<d;i++){
		int s=1;
		for(int j=0;j<c;j++){
			s*=arr[i][j];
		}
	}
}
void hoanvi(int i,int j){
	int tmp=i;
		i=j;
		j=tmp;
}
int main(){
	int arr[N][N],c,d;
	nhap(arr,c,d);
	xuat(arr,c,d);
}
