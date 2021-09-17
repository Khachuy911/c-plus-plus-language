#include<iostream>
using namespace std;
#define N 100

void nhap(int arr[][N],int h,int c){
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
}
void bien(int arr[][N],int h,int c){
	for(int j=0;j<c;j++){
				cout<<arr[0][j]<<" ";
		
	}
	for(int i=1;i<h;i++){
				cout<<arr[i][c-1]<<" ";
	}
	for(int j=c-2;j>0;j--){
				cout<<arr[h-1][j]<<" ";		
	}
	for(int i=h-1;i>0;i--){
				cout<<arr[i][0]<<" ";
	}
}

int main(){
	int h,c,arr[N][N];
	cin>>h>>c;
	nhap(arr,h,c);
	bien(arr,h,c);
}















//void kiemtra(int arr[][N],int n ){
//	int count =0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(arr[i][j] != arr[j][i]){
//				count++;
//			}
//		}
//	}
//	if(count==0){
//		cout<<"YES";
//	}else 
//		cout<<"NO";
//}
// chi xet nua ma tran 2for ,for trong <i 
