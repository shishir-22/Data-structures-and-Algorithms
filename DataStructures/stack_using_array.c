#include<stdio.h>
int push(int arr[],int elem,int top){
	top=top+1;
	arr[top]=elem;
	return top;
}
int pop(int arr[],int top){
	int temp=arr[top];
	top=top-1;
	return top;
}
int main(){
	int i,n,top=-1,con=1,choice,elem;
	printf("Enter the size of stack:");
	scanf("%d",&n);
	int arr[n];
	while(con==1){
	printf("\nEnter your choice!");
	printf("\nPress 1 to insert element");
	printf("\nPress 2 to delete element");
	printf("\nPress 3 to display stack");
	printf("\nPress 4 to exit\n");
	scanf("%d",&choice);
	if(choice==1){
		if(top<n-1){
		printf("\nEnter Element to insert:");
		scanf("%d",&elem);
		top=push(arr,elem,top);
		}else{
		printf("\nStack is full!");
		}
	}else if(choice==2){
		if(top>=0){
		top=pop(arr,top);
		}else{
		printf("\nStack is empty!");
		}
	}else if(choice==3){
		for(i=top;i>=0;i--){
		printf("\n%d",arr[i]);
		}
	}
	else if(choice==4){
		con=0;
	}
	}
}

