#include<bits/stdc++.h>
using namespace std;

//int main(){
//	fstream ofs;
//	ofs.open("InputFile.txt",ios::out);
//	int arr[5];
//	for(int i=0;i<5;i++){
//	
//		cin>>arr[i];
//	ofs<<arr[i];
//}
//	ofs.close();
//}

int main(){
	fstream ifs;
	ifs.open("InputFile.txt");
	string text;
	while(!ifs.eof()){
		ifs>>text;
		cout<<text<<" ";
	}
}
