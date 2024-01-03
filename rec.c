#include<stdio.h>
#include<conio.h>
int main(){
	int x,n,ans;
	printf("Enter the number: ");
	scanf("%d",&n);
	ans=fact(n);
	printf("Ans =  %d",ans);
}
int fact(x){
	if (x==0)
	return 1;
	
	return x*fact(x-1);
}
