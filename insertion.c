#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\nUnorted Array is : \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	insertion_sort(a,n);
	
	printf("\nSorted Array is : \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
void insertion_sort(int a[],int n){
	int i, x, j;
    for (i = 1; i < n; i++) {
        x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = x;
    }
}

