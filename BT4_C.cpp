#include <stdio.h>
int calcTotal(int A[], int n){
	int s=0,i=0;
	for (i=0;i<n;i++){s=s+A[i];}
	return s;
	}
int calcMax(int A[], int n){
	int maxval=A[0];
	for (int i=1;i<n;i++){
			if (A[i]>maxval){
				maxval=A[i];
			}
		}
	return maxval;
	}
int main(){
	int A[100],n,i=0;
	printf("Nhap n= "); 
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		printf("A[%d]=", i+1); 
		scanf("%d",&A[i]);
	}
	if(n==0){
		printf("Khong co phan tu nao!");
		} 
	else{
		printf("Tong cac so trong mang: %d", calcTotal(A,n));
		printf("\nSo lon nhat trong mang: %d\n", calcMax(A,n));
	}
}
