#include<stdio.h>
#include<limits.h>
int main(){
	int n,i,target,len;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the target sum: ");
	scanf("%d",&target);
	printf("Enter the elements of array: ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	len=len_sub_arr(a,n ,target);
	printf("%d",len);
}
int len_sub_arr(int a[],int n ,int target){
	int i,j,sum=0,len=INT_MAX;
	for(i=0;i<n;i++)
	{
		sum=+a[i];
		while(sum>=target){
			if (len>i-j+1) len=i-j+1;
			sum-=a[j];
			j++;}
	}
	return len;
	
}
