#include<stdio.h>
#include<conio.h>
int targetsum(int a[],int n,int target){
	int i,j;
	i=0;
	j=n-1;
	while (i<j){
	if (a[i]+a[j]== target)
	return 1;
	else if (a[i]+a[j]>target)
	j--;
	else i++;
	}
	return 0;
}
int main(){
	int n,i,target;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the target sum: ");
	scanf("%d",&target);
	printf("Enter the elements of array: ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if (targetsum( a,n,target))
	printf("Pair present");
	else
	printf("Pair not present");
	
	return 0;
}

