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


//       xoa snt
//int soNguyenTo(int x){
//	if(x<2)
//	 return 0;
//	for(int i=2;i<=sqrt(x);i++){
//		if(x%i==0)
//		   return 0;
//	}
//	return 1;
//}
//int xoa(int arr[], int &n, int vitri){
//	for(int i=vitri;i<n;i++)
//	{
//		arr[i]=arr[i+1];
//	}
//	n--;
//}
//int kiemtra(int arr[], int n){
//	for(int i=0;i<n;i++){
//		if(soNguyenTo(arr[i]))
//		    {
//		    	xoa(arr,n,i);
//		    	i--;
//			}
//	}
//	xuatmang(arr,n);
//}
