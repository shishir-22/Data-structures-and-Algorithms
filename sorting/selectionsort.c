#include<stdio.h>
int selectionsort(int arr[],int n){
	int i,j,min,position,temp;
        for(i=0;i<n;i++){
		min=arr[i];
		position=i;
	    for(j=i;j<n;j++){
		if(arr[j]<min){
		   min=arr[j];
		   position=j;
		}}
		temp=arr[i];
		arr[i]=arr[position];
		arr[position]=temp;
	}
}
int main(){
     int i,n;
     printf("Enter the size of array:");
     scanf("%d",&n);
     int arr[n];
     printf("\nEnter array elements:");
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
      }
      
     selectionsort(arr,n);
     printf("\nSorted Array:");
     for(i=0;i<n;i++){
         printf("%d ",arr[i]);
      }   
}
     
