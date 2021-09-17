#include<iostream>
using namespace std;
#define N 100



//          UCLN
//int uscln(int a,int b){
//	if(a%b==0){
//		return b;
//	}else {
//		return uscln(b,a%b);
//		}
//}
//
//int main(){
//	int a,b;
//	cout<<"nhap a,b: ";
//	cin>>a>>b;
//	if(b==0){
//		cout<<"khong co UCLN !";
//	}else
//	cout<<uscln(a,b);
//}



//       BCNN
//int UCLN(int a,int b){
//	if(a%b==0){
//		return b;
//	}else {
//		return UCLN(b,a%b);
//	}
//}
//int BCNN(int a,int b){
//	int bcnn =(a*b)/UCLN(a,b);
//}
//
//int main(){
//	int a,b;
//	do{
//	cout<<"nhap a,b: ";
//	cin>>a>>b;
//	}while(a<=0 || b<=0);
//	cout<<BCNN(a,b);
//}



//   so nguyen to
//int SNT (int a){
//	if(a==0 || a==1){
//		return false; 
//	}
//	for(int i=2;i<=sqrt(a);i++){
//		if(a%i==0){
//			return false;
//		}
//	}
//	return true;
//}



//     chinh phuong
//int chinhphuong(int a){
//	int x= (int)sqrt(a);
//	if(x*x==a && a!=0){
//		return 1;
//	}
//	else return 0;
//}
//int main(){
//	if(chinhphuong(0)){
//		cout<<"true";
//	}
//}





//    FIBONACCI
//int fibonacci(int a){
//	if(a==1 ||a==2){
//		return 1;
//	}else{
//		return  fibonacci(a-1) + fibonacci(a-2);
//	}
//}
//int main(){
//	cout<<fibonacci(8);
//}















