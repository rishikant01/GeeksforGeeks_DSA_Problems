#include <stdio.h>

int maxContinuousGoodLamps(int arr[], int n, int k) {
    int maxGoodLamps = 0;
    int left = 0,right;
    int fusedLamps = 0;

    for (right = 0; right < n; right++) {
        if (arr[right] == 0) {
            fusedLamps++;
        }

        while (fusedLamps > k) {
            if (arr[left] == 0) {
                fusedLamps--;
            }
            left++;
        }

        if (right - left + 1 > maxGoodLamps) {
            maxGoodLamps = right - left + 1;
        }
    }

    return maxGoodLamps;
}

int main(){
	int n,i,k,ans;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&k);
	ans=maxContinuousGoodLamps(arr,n,k);
	printf("%d",ans);
	return 0;
}

