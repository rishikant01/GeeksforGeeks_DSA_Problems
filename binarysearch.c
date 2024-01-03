#include<stdio.h>
#include<conio.h>
int main(){
	int arr[5],n,i,strt,mid,end;
	printf("Enter elements of array: ");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched : ");
	scanf("%d",&n);
	strt=0;
	end=4;
	
	while (strt<=end){
	mid=(strt+end)/2;
	if (arr[mid]==n){
	printf("Element is found at index %d",mid);
	break;
	}
	else if (arr[mid]>n)
	end=mid-1;
	else 
	strt=mid+1;
	}
	
}
