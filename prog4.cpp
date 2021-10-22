#include<stdio.h>

int main(){
	
	int n,a[10],box[10],count=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the numbers of array : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++){
		int freq=0;
		box[count] = a[i];		
			
		
			
		for(int j=0;j<=count;j++)
			if(box[j]==a[i])
				freq++;	
		printf(" freq = %d",freq);
		if(freq>1)
			count--;
		else	
			printf("\n %d ",box[count]);
		count++;
	}
		
}
