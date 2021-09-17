#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	float s,p,cv;
	cin>>a>>b>>c;
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
		if(a*a+b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
			cout<<"vuong"<<endl;
		}
		else if(a == b && b==c){
			cout<<"deu"<<endl;
		}
		else if( a==b || b==c || a==c ){
		 	cout<<"can"<<endl;
		 } else 
		 cout<<"thuong";
	cv=a+b+c;
	cout<<"chu vi: "<<cv<<endl;	
	p=(float)cv/2;
	s=(float)sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"dien tich: "<<s;
	} else 
	cout<<"NO";
}
