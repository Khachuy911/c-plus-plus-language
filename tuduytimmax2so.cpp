#include <iostream>
using namespace std;

int main()
{
    int n,a[100];
    cin >> n;
    for(int i=0; i<n ;i++)
        cin >> a[i];
        
    int dem = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(a[j]%a[i]==0)
                count++;
        }
        if(count == n){
            cout << a[i];
            dem++;
            break;
        }
    }
    if(dem == 0)
        cout << "-1";
}














//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int maxArr( int arr[], int n ){
//    if ( n == 0 )
//    {
//        return 0;
//    }
//    return max( maxArr(arr, n-1), arr[n]);
//}
//int main(){
//	int arr[]={1,2,3,4,-10,-99,99,100,1000,-100};
//	cout<<maxArr(arr,10);
//	
//}









//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n,m,x = 0;;
//    cin>>n>>m;
//    int a[n], b[n], c[n+m];
//    for (int i = 0; i < n; i++){
//        cin>>a[i];
//    }
//    for (int i = 0; i < m; i++){
//        cin>>b[i];
//    }
//    for (int i = 0; i < n; i++){
//    	c[x]= a[i];
//    	x++;
//	}
//	for (int i = 0; i < m; i++){
//		c[x]= b[i];
//    	x++;
//	}
//    for (int i = 0; i < x; i++){
//        for (int j = i+1; j < x; j++){
//            if ( c[i] > c[j] ){
//                int tmp = c[i];
//					c[i]=c[j];
//					c[j]=tmp;
//            }
//        }
//    }
//    for (int i = 0; i < count; i++){
//        cout<<c[i]<<" ";
//    }
//    
//    return 0;
//}
//

























//int max2Numbers(int n){
//	if(n==0){
//		return 0;
//	}else {
//		return max(max2Numbers(n/10),n%10);
//	}
//}
//int chiahet(int n){
//	if(n==0){
//		return 0;
//	}else if((n%10)%2!=0){
//		return chiahet(n/10);
//	}else {
//		return max(chiahet(n/10),(n%10));
//	}
//}
//int arraymax(int n){
//	
//}
//bool scp(int n){
//	int sqr = sqrt(n);
//	if(sqr * sqr == n){
//		return true;
//	}
//	return false;
//}
//
//void sx(int arr[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(scp(arr[i]) && scp(arr[j]) && arr[i] > arr[j]){
//				int tmp = arr[i];
//					arr[i]=arr[j];
//					arr[j]=tmp;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//
//
//
//int main(){
//	int n;
//	cin>>n;
//	int arr[] = {9,5,1,4,10};
//	sx(arr,n);
//}
