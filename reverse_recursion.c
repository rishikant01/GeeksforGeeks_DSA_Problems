#include<stdio.h> 
int sum=0,r;
int rev(int n){
	
	if(n) {
		r=n%10;
		sum=sum*10+r;
		rev(n/10);
	}
return sum;
	
}
int main(){
	int n,ans;
	printf("Enter the number : ");
	scanf("%d",&n);
	ans=rev(n);
	printf("%d",ans);

}


