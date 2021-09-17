#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
	FILE *word;
	char c;
//	word= fopen("C:\\Users\\Khac Huy\\Desktop\\test.txt","w");
//	do{
//		ch= getche();
//		putc(ch,word);
//	}while(ch!=13);
//	
//	fclose(word);
//	
	
	word = fopen("C:\\Users\\Khac Huy\\Desktop\\test.txt","r");
	while(!feof(word)){
		c = getc(word);
		cout<<c;
	}

	

}
