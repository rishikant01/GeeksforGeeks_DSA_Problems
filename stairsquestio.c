#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,n,i,ans;
	a=1;
	b=1;
	printf("Enter the  number of steps climbed: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
	c=a+b;
	a=b;
	b=c;
	}
	printf("ITERATIVE \nTotal Ways : %d\n",b		);
	ans=recfibo(n);
	printf("RECURSIVE \nTotal Ways : %d",ans);
}

int recfibo(x){
	if (x==0 || x==1)
	return x ;
	return recfibo(x-1)+recfibo(x-3);
}
