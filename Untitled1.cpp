#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

void xuatfile(){
	fstream ofs;
	ofs.open("C:\\Users\\Khac Huy\\Desktop\\huy.txt");
	char word[1000];
	while(!ofs.eof()){
		ofs>>word;
		puts(word);
	}
	ofs.close();
}

void nhapfile(){
	fstream ifs;
	ifs.open("C:\\Users\\Khac Huy\\Desktop\\huy.txt", ios::out);
	char word[100];
	fflush(stdin);
	gets(word);
	ifs<<word;	
	ifs.close();
}

int main(){
//	fstream ifs;
//	int arr[100];
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	ifs.open("C:\\Users\\Khac Huy\\Desktop\\huy.txt",ios::out);
//	ifs<<n<<endl;
//	for(int i=0;i<n;i++){
//		ifs<<arr[i]<<" ";
//	}
//	ifs.close();

	fstream ofs;
	int arr[100];
	int n;
	ofs.open("C:\\Users\\Khac Huy\\Desktop\\huy.txt");
	ofs>>n;
	for(int i=0;i<n;i++){
		ofs>>arr[i];
		cout<<arr[i]<<" ";
	}
	ofs.close();
}


