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
	
	bubble_sort(a,n);
	
	printf("\nSorted Array is : \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
void bubble_sort(int a[],int n){
	int i,j,temp;
	for (i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
