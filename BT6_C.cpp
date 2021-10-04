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
	int A[100], n=0,s=0, p=1, min,max,opt;
	printf("Nhap so phan tu: "); 
	scanf("%d", &n);
	for( int i=0;i<n;i++){
		printf("A[%d]",i+1);
		scanf("%d",&A[i]);
	}
	do {
		printf("1-cong\n 2-lon nhat\n ");
		scanf("%d",&opt);
		switch(opt){
			case 1: printf("Tong=%d", calcTotal(A,n));break;
			case 2: printf("Max=%d", calcMax(A,n));break;
			default: printf("End of game\n");break;
		}
	}
	while (opt!=0);
}
