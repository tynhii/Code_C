/*
Ho va ten:
So may:
*/

/*
VIET CHUONG TRINH VOI MENU SAU DAY (SU DUNG CON TRO):
1- NHAP CAC SO NGUYEN DUONG (CHO DEN KHI NHAP SO 0) VA LUU VAO TRONG MANG
2- HIEN THI CAC SO NGUYEN DUONG DA NHAP
3- TINH TONG CAC SO NGUYEN DUONG DA NHAP
4- TINH TICH CAC SO NGUYEN DUONG DA NHAP
5- DEM SO LUONG CAC SO DA NHAP CHIA HET CHO BA
6- NHAP HAI SO NGUYEN DUONG VA CHO BIET SO LUONG CAC SO TRONG MANG (CAU 1) NAM GIUA HAI SO NAY
0- THOAT KHOI CHUONG TRINH
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int readNumbers(int *a, int &n){
	int x;
	do {
		scanf("%d",&x);
		if (x!=0){
			*(a+n)=x;
			n++;
		}
	}
	while (x!=0);
}

int printNumbers(int *a, int n){
	for (int i=0;i<n;i++)
		printf("%d ", *(a+i));
}

int totalNumbers(int *a, int n){
	int s=0;
	for (int i=0;i<n;i++)
		s+=(a[i]);
	return s;
}

int productNumbers(int *a, int n){
	int p=1;
	for (int i=0;i<n;i++)
		p=p*a[i];
	return p;
}

int countNumbers(int *a, int n){
	int count=0;
	for (int i=0;i<n;i++)
		if (*(a+i)%3==0)
			count++;
	return count;
}

int countNumbers(int *a, int n, int x, int y){
	int count =0;
	for (int i=0;i<n;i++)
		if ((*(a+i)>=x&&*(a+i)<=y)||(*(a+i)>=y&&*(a+i)<=x))
			count++;
	return count;
}

int main(){
	int *a=(int*)malloc(sizeof(int));
	int n=0;
	int sel = 0;
	int pos=0;
	do {
		printf("\nMENU");
		printf("\n1- NHAP CAC SO NGUYEN DUONG (CHO DEN KHI NHAP SO 0) VA LUU VAO TRONG MANG");
		printf("\n2- HIEN THI CAC SO NGUYEN DUONG DA NHAP");
		printf("\n3- TINH TONG CAC SO NGUYEN DUONG DA NHAP");
		printf("\n4- TINH TICH CAC SO NGUYEN DUONG DA NHAP");
		printf("\n5- DEM SO LUONG CAC SO DA NHAP CHIA HET CHO BA");
		printf("\n6- NHAP HAI SO NGUYEN DUONG VA CHO BIET SO LUONG CAC SO TRONG MANG (CAU 1) NAM GIUA HAI SO NAY");
		printf("\n0- THOAT KHOI CHUONG TRINH\n");
		printf("Chon: "); scanf("%d",&sel);
		switch (sel){
			case 1:
				printf("NHAP CAC SO NGUYEN DUONG: ");
				readNumbers(a,n);
				pos=1;
				break;
			case 2:
				if (pos==0){
					printf("CHUA NHAP CAC SO NGUYEN DUONG");
				} else {
					printf("CAC SO DA NHAP: ");
					printNumbers(a,n);
				}
				break;
			case 3:
				if (pos==0){
					printf("CHUA NHAP CAC SO NGUYEN DUONG");
				} else {
					printf("TONG CAC SO DA NHAP: %d", totalNumbers(a,n));					
				}
				break;
			case 4:
				if (pos==0){
					printf("CHUA NHAP CAC SO NGUYEN DUONG");
				} else {
					printf("TICH CAC SO DA NHAP: %d", productNumbers(a,n));
				}
				break;
			case 5:
				if (pos==0){
					printf("CHUA NHAP CAC SO NGUYEN DUONG");
				} else {
					printf("CAC SO CHIA HET CHO 3: %d", countNumbers(a,n));					
				}
				break;
			case 6:
				if (pos==0){
					printf("CHUA NHAP CAC SO NGUYEN DUONG");
				} else {
					int x,y;
					printf("Nhap them hai so x, y: ");scanf("%d %d",&x,&y);
					printf("SO LUONG CAC SO NAM GIUA %d %d la %d", x,y, countNumbers(a,n,x,y));					
				}
				break;				
			default:
				break;
		}
	}
	while (sel!=0);
	free(a);
	return 0;
}
