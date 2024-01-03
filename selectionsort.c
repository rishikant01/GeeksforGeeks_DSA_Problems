#include<stdio.h>

void selection_sort_array(int a[],int n){
	int min_index,i,j,temp;
	for(i=0;i<n;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if (a[j]<a[min_index]) min_index=j;
		}
			temp=a[i];
			a[i]= a[min_index];
			a[min_index]=temp;
		}
	
}
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
	
	selection_sort_array(a,n);
	
	printf("\nSorted Array is : \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}

