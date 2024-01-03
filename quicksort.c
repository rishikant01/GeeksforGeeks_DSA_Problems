#include<stdio.h>
int partion(int arr[],int low,int high){
	int pivot,temp,i,j;
	pivot=arr[high];
	i=low;
	for(j=low;j<high;j++){
		if (arr[j]< pivot){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]= temp;
			i++;
		}
	}
	return (i-1);
}
void quicksort(int arr[],int low,int high){
	int pi;
	if (low<high){
		pi=partion(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
      }
}

int main(){
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("\nUnorted Array is : \n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	quicksort(arr,0,n-1);
	
	printf("\nSorted Array is : \n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
