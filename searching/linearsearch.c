#include<stdio.h>
int linearsearch(int arr[],int n, int element){
         int i;
        for(i=0;i<n;i++){
           if(arr[i]==element){
               return i;
             }
        }
        return -1;
}
int main(){
     int i,n,element,index;
     printf("Enter the size of array:");
     scanf("%d",&n);
     int arr[n];
     printf("\nEnter array elements:");
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
     
