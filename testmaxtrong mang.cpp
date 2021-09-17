#include<stdio.h>
#define N 100

void nhap(float a[],int &n){
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
}
void xuat(float a[],int n){
	for(int i=0;i<n;i++){
		printf("%.1f ",a[i]);
	}
}
void find__max__min(float a[],int n){
	float max=a[0], min = a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("\nmax= %.1f \nmin= %.1f",max,min); 
}
int main(){
	float a[N];
	int n;
	nhap(a,n);
	xuat(a,n);
	find__max__min(a,n);
}
