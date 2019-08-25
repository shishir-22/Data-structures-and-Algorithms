#include<stdio.h>
int linearsearch(int arr[],int n, int element){
         int low=0,high=n-1,mid;
        while(low<=high){
	mid=(low+high)/2;
	if(element==arr[mid]){
        return mid;
	}else if(arr[mid]<element){
	      low=mid+1;
	}else if(arr[mid]>element){
	      high=mid-1;
	}
	}
        return -1;
}
int main(){
     int i,n,element,index;
     printf("Enter the size of array:");
     scanf("%d",&n);
     int arr[n];
     printf("\nEnter array elements in sorted order:");
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
      }
     printf("Enter element to search:");
     scanf("%d",&element);
     index=linearsearch(arr,n,element);
     if(index==-1){
        printf("Element not present in the array!");
      }else{
        printf("Element present at index number %d!",index);
      }
}
     
