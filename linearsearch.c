#include<stdio.h>
#include<conio.h>
int main(){
	int arr[5],n,i;
	printf("Enter elements of array: ");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);}
	printf("Enter the number to be searched : ");
	scanf("%d",&n);
	for (i=0;i<5;i++){
		if (arr[i]== n){
		printf("Element is found at index %d",i);
		}
	}
}
