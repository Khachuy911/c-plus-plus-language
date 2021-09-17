#include<iostream>

using namespace std;
int main(){
	int *a,x=10;
	a=&x;
	*a=20;
	cout<<x;
}
