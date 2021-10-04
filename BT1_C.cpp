/*
Ho va ten:
So may:
*/

/*
VIET CHUONG TRINH VOI MENU SAU DAY:
1- NHAP HAI SO NGUYEN DUONG
2- HIEN THI HAI SO NGUYEN DUONG DA NHAP
3- HOAN VI HAI SO NGUYEN DUONG DA NHAP
4- LIET KE CAC SO NAM GIUA HAI SO DA NHAP (TU NHO DEN LON)
5- TINH TONG CAC SO NAM GIUA HAI SO DA NHAP
6- DEM SO LUONG CAC SO CHIA HET CHO BA NAM GIUA HAI SO DA NHAP
0- THOAT KHOI CHUONG TRINH
*/

#include <stdio.h>

int readNumbers(int *a, int *b){
	return scanf("%d %d", a, b);
}

int printNumbers(int a, int b){
	printf("%d %d", a, b);
}

int showNumbers(int a, int b){
	if (a<b){
		for (int i=a;i<=b;i++)
			printf("%d ",i);
	}
	else {
		for (int i=b;i<=a;i++)
			printf("%d ",i);
	}
}

int totalNumbers(int a, int b){
	int s=0;
	if (a<b){
		for (int i=a;i<=b;i++)
			s=s+i;
	}
	else {
		for (int i=b;i<=a;i++)
			s=s+i;
	}
	return s;
}

int countNumbers(int a, int b){
	int s=0;
	if (a<b){
		for (int i=a;i<=b;i++)
			if (i%3==0)
				s++;
	}
	else {
		for (int i=b;i<=a;i++)
			if (i%3==0)
				s++;
	}
	return s;
}

int swapNumbers(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int main(){
	int sel = 0;
	int a,b;
	int pos=0;
	do {
		printf("\nMENU");
		printf("\n1- NHAP HAI SO NGUYEN DUONG");
		printf("\n2- HIEN THI HAI SO NGUYEN DUONG DA NHAP");
		printf("\n3- HOAN VI HAI SO NGUYEN DUONG DA NHAP");
		printf("\n4- LIET KE CAC SO NAM GIUA HAI SO DA NHAP (TU NHO DEN LON)");
		printf("\n5- TINH TONG CAC SO NAM GIUA HAI SO DA NHAP");
		printf("\n6- DEM SO LUONG CAC SO CHIA HET CHO BA NAM GIUA HAI SO DA NHAP");
		printf("\n0- THOAT KHOI CHUONG TRINH\n");
		printf("Chon: "); scanf("%d",&sel);
		switch (sel){
			case 1:
				printf("NHAP HAI SO NGUYEN DUONG: ");
				readNumbers(&a,&b);
				pos=1;
				break;
			case 2:
				if (pos==0){
					printf("CHUA NHAP HAI SO NGUYEN DUONG");
				} else {
					printf("HAI SO DA NHAP: ");
					printNumbers(a,b);
				}
				break;
			case 3:
				if (pos==0){
					printf("CHUA NHAP HAI SO NGUYEN DUONG");
				} else {
					printf("HOAN VI HAI SO: ");
					swapNumbers(&a,&b);
					printNumbers(a,b);
				}
				break;
			case 4:
				if (pos==0){
					printf("CHUA NHAP HAI SO NGUYEN DUONG");
				} else {
					printf("LIET KE CAC SO: ");
					showNumbers(a,b);
				}
				break;
			case 5:
				if (pos==0){
					printf("CHUA NHAP HAI SO NGUYEN DUONG");
				} else {
					printf("TONG CAC SO: %d", totalNumbers(a,b));					
				}
				break;
			case 6:
				if (pos==0){
					printf("CHUA NHAP HAI SO NGUYEN DUONG");
				} else {
					printf("SO LUONG CAC SO: %d", countNumbers(a,b));					
				}
				break;				
			default:
				break;
		}
	}
	while (sel!=0);
	return 0;
}
