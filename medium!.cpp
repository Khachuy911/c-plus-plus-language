
//     so doi dien
//int timsodoidien(int n,int x){
//	  if(x>=n/2)
//        cout<<x%(n/2);
//    else
//        cout<<x+n/2;
//}
//
//int main()
//{
//    int n;
//    int x;
//    cin>>n;
//    cin>>x;
//    timsodoidien(n,x);
//    return 0;
//}


//      tien
//int sototien(int x){
//	int dem=0;
//    if(x>=5){
//        dem+=x/5;
//		x%=5;
//		}
//    if(x>=2){
//        dem+=x/2;
//		x%=2;
//		}
//    if(x>=1){
//        dem+=x;
//		x=0;
//		}
//    cout<<dem;
//}
//
//int main()
//{
//    int x;
//    cin>>x;
//    sototien(x);
//    return 0;
//}

//     so hoan hao
//int kiemTraSoHoanHao(int n){
//	int s=0;
//	for(int i=1;i<n;i++){
//		if(n%i==0)
//		s+=i;	
//}
//		if(s==n){
//		    return 1;
//		}else return 0;
//}


//     so hoan hao
//int kiemTraSoHoanHao(int n){
//	int s=0;
//	for(int i=1;i<n;i++){
//		if(n%i==0)
//		s+=i;	
//}
//		if(s==n){
//		    return 1;
//		}else return 0;
//}


//       Gau
//int timYear(int a,int b){
//	int year = 0;
//	if(a <= b){
//		do{
//			a *= 3;
//			b *= 2;
//			year++;
//		}while(a <= b);
//	}
//	return year;
//}
//
//int main(){
//    int a,b;	
//	cin >> a >> b;
//	cout<<timYear(a,b);
//	return 0;
//}




//    so doi xung
//void nhap(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//}
//
//void xuat(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//
//int soDoiXung(int n){
//		if(n>0 && n<10){
//			return false;
//		}else{
//			int sum=0,du,x;
//			for(x=n;n!=0;n/=10){
//				du=n%10;
//				sum=(sum*10)+du;
//			}
//			if(sum==x)
//			return 1;
//		}
//		return 0;
//	}
//	
//void xoa(int arr[],int &n,int v){
//	for(int i=v;i<n;i++){
//		arr[i]=arr[i+1];
//	}
//	n--;
//}
//
//int xoaSoDoiXung(int arr[],int n){
//	for(int i=0;i<n;i++){
//		if(soDoiXung(arr[i])){
//			xoa(arr,n,i);
//			i--;
//		}
//	}
//		xuat(arr,n);
//}	
//	
//int main(){
//	int arr[100],n;
//	cin>>n;
//	nhap(arr,n);
//	xoaSoDoiXung(arr,n);
//
//}





//     so hoan hao
//int kiemTraSoHoanHao(int n){
//	int s=0;
//	for(int i=1;i<n;i++){
//		if(n%i==0)
//		s+=i;	
//}
//		if(s==n){
//		    return 1;
//		}else return 0;
//}





//   xoa snt
//int soNguyenTo(int x){
//	if(x<2)
//	 return 0;
//	for(int i=2;i<=sqrt(x);i++){
//		if(x%i==0)
//		   return 0;
//	}
//	return 1;
//}
//	
//void xoa(int arr[],int &n,int v){
//	for(int i=v;i<n;i++){
//		arr[i]=arr[i+1];
//	}
//	n--;
//}
//
//void kiemTra(int arr[],int n){
//	for(int i=0;i<n;i++){
//		if(soNguyenTo(arr[i])){
//			xoa(arr,n,i);
//			i--;
//		}
//	}
//		xuat(arr,n);
//}	
//	
//int main(){
//	int arr[100],n;
//	cin>>n;
//	nhap(arr,n);
//	kiemTra(arr,n);
//
//}
