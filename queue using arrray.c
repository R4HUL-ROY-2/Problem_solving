#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i, x,a[50];
	printf("enter the number of elements \n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("enter the element to find : ");
	scanf("%d",&x);
	
	for(i=0; i<n; i++){
		if(a[i] == x){
			printf("element found at position %d \n", i+1);
			exit(1);
		}
	}	
	printf("element not found \n");
	return 0;
}
