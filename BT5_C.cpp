//nhap n phan tu, tinh tong n phan tu vua nhap vao.Tim GTLN cua phan tu trong mang do.
#include <stdio.h>
int calcTotal(int A[], int n){
	int s=0,i=0;
	for (i=0;i<n;i++){s=s+A[i];}
	return s;
	}
int main(){
	int n,max=100,i=0;int A[max],maxval;
	printf("Nhap n= "); 
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		printf("A[%d]=", i+1); 
		scanf("%d",&A[i]);
	}
		printf("Tong cac so trong mang: %d", calcTotal(A,n));
	if(n==0){
		printf("Khong co phan tu nao!");
		} 
	else {maxval=A[0];
		for (i=0;i<n;i++){
			if (A[i]>maxval){
				maxval=A[i];
				}
			}
			printf("\nSo lon nhat trong mang: %d\n", maxval);
		}

	}

