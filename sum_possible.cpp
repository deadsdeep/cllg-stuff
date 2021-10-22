#include<stdio.h>

int main(){
	int n,a[10],sum;
	printf(" n value : ");
	scanf("%d",&n);
	
	printf("array values :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\n sum = ");
	scanf("%d",&sum);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				int sum1=a[i]+a[j];
				if(sum==sum1){
					printf("\nsol = %d + %d",a[i],a[j]);
					return 0;
				}
			}
		}	
	}
	
		printf(" \nsrry no sum possible ");
}
