//bai 1

//#include<iostream>
//#include<math.h>
//using namespace std;
//void nhap (int &n,float &x){
//	do{
//		cout<<"Nhap n duong: ";
//		cin>>n;
//	}while(n<=0);
//	cout<<"Nhap x: ";
//	cin>>x;
//}
//
//int tinh_b(int n){
//	int T=0;
//	for(int i=1;i<=n;i++){
//		if(i%2==0){
//			T+=i;
//		}
//	}
//	return T;
//}
//
//float tinh_c(int n, float x){
//	int T = tinh_b(n);
//	float s=1;
//	if(T==0){
//		return 0;
//	}else
//	for(int i=1;i<=n;i++){
//		s+=(float)pow(x,2*i)/(i*T);
//	}
//	return s;
//}
//
//int main(){
//	int n;
//	float x;
//	nhap(n,x);
//	cout<<"KQ= "<<tinh_b(n);
//	if(tinh_c(n,x)==0){
//		cout<<"\nKhong Chia Duoc ";
//	}else
//	cout<<"\nKQ of C= "<<tinh_c(n,x);
//}



// bai 2



//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//void nhap(int *a,int &n){
//	cout<<"nhap n: ";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>*(a+i);
//	}
//}
//
//void xuat(int *a,int n){
//	for(int i=0;i<n;i++){
//		cout<<*(a+i)<<" ";
//	}
//}
//void writeFile(int *a,int n){
//	fstream ofs;
//	ofs.open("C:\\Users\\Khac Huy\\Desktop\\ABC2008.txt",ios::app);
//	for(int i=0;i<n;i++){
//		ofs<<*(a+i)<<" ";
//		if(i==n-1){
//			ofs<<"\n";			
//		}
//	}
//	ofs.close();
//}
//void sort(int *a,int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i;j<n;j++){
//			if(*(a+i)<*(a+j)){
//				int tmp = *(a+i);
//					*(a+i) = *(a+j);
//					*(a+j) = tmp; 
//			}
//		}
//	}
//}
//
//int check(int *a,int n){
//	for(int i=0;i<n;i++){
//		if(*(a+i)<5){
//			return 0;
//		}
//	}
//	return 1;
//}
//void xoa(int *a,int n,int v){
//	for(int i=v;i<n;i++){
//		*(a+i)=*(a+i+1);
//	}
//
//}
//void xoaAm(int *a,int &n){
//	for(int i=0;i<n;i++){
//		if(*(a+i)<0){
//			xoa(a,n,i);
//			i--;
//			n--;
//		}
//	}
//}
//int main(){	
//	int *a;
//	int n;
//	a = new int[n];
//	nhap(a,n);
//	xuat(a,n);
//	writeFile(a,n);
//	sort(a,n);
//	writeFile(a,n);
//	cout<<"\n";
//	xuat(a,n);
//	if(check(a,n)==1){
//		cout<<"\nMang toan so lon hon 5";
//	}else cout<<"\nMang khong toan so lon hon 5";
//	xoaAm(a,n);
//	cout<<"\n";
//	xuat(a,n);
//}
