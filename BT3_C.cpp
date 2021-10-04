#include<stdio.h>
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);}
		}
int max(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
	}
int main(){
	int n,i,s=0;
	printf("Nhap n:",n);
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
		printf(" So thu a[%d]: ", i);
		scanf("%d",&a[i]);}
	 printf("\nMang da nhap: \n");
	for (i=0;i<n;i++)
	printf("a[%d]=%d\t",i,a[i]);
	for (i = 0; i < n; i++) s = s+a[i];
    printf("\nTong cac so trong mang: %d\n", s);	
     printf("\nMax = %d", max(a, n));
return 0;
}


