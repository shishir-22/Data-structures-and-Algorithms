#include<stdio.h>
int insertionsort(int arr[],int n){
        int i,j,temp;
	for(i=0;i<n;i++){
             j=i;
             while(j>0 && arr[j]<arr[j-1]){
		temp=arr[j];
		arr[j]=arr[j-1];
		arr[j-1]=temp;
		j--;
        } }
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
      
     insertionsort(arr,n);
     printf("\nSorted Array:");
     for(i=0;i<n;i++){
         printf("%d ",arr[i]);
      }   
}
     
