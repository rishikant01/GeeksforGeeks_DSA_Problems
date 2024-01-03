#include<stdio.h>
#include<conio.h>
int sub_arr_sum(int a[],int n,int subsize, int target){
	int i,j,sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		if(i+1>=subsize)
		{
		if(sum==target){
		
		for(j=i+1-subsize;j<=i;j++)
		printf("%d ",a[j]);
		return 1;
	}
		sum-=a[i+1-subsize];
	 }
	}
	return 0;
}

int main(){
	int n,i,target,subsize;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the size of subarray: ");
	scanf("%d",&subsize);
	printf("Enter the target sum: ");
	scanf("%d",&target);
	printf("Enter the elements of array: ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if (sub_arr_sum( a,n,subsize,target))
	printf("\nSubarray present");
	else
	printf("\nSubarray not present");
	
	return 0;
}
