#include<fstream>
#include<iostream>
using namespace std;

void show(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void soChan(int *a,int *b,int n){
	int x=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[x++]=a[i];
		}
	}
}

//int main(){
//	fstream ofs;
//	ofs.open("InputFile.txt", ios::out);
//	char text;
//	cin>>text;
//	ofs << text;	
//	ofs.close();
//}

int main(){
	fstream ifs;
	ifs.open("InputFile.txt");
	string word;
	while(!ifs.eof()){
		ifs>>word;
		cout<<word<<" ";
	}
	ifs.close();
}




