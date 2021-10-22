#include<stdio.h>

int main(){
	int a[10],n;
	
	printf(" enter n values : ");
	scanf("%d",&n);
	
	printf("\nEnter array values :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]==a[j]){
				printf("\n not unique ");
				return 0;
			}
	printf("\nunique");
}
