#include<stdio.h>

int main(){
	int a[10],n;
	
	printf(" enter n value : ");
	scanf("%d",&n);
	
	printf("\nEnter array values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(int i=1;i<30;i++){
		int freq=0;
		for(int j=0;j<n;j++)
			if(i==a[j]){
				freq++;
			}
		if(freq>0)	
			printf("\nThe number of %d's is %d",i,freq);
	}
}
