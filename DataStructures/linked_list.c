#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}n;
int main(){
	struct node *head, *p;
	int n,i;
	printf("Enter number of elements you want to insert into the linked list:");
	scanf("%d",&n);
	head=(struct node*)malloc(sizeof(n));
	head->next=NULL;
	p=(struct node*)malloc(sizeof(n));	
	scanf("%d",&(p->data));
	head->next=p;
	p->next=NULL;
	for(i=1;i<n;i++){
	    p->next=(struct node*)malloc(sizeof(n));
	    p=p->next;
	    scanf("%d",&(p->data));
	    p->next=NULL;
	    }
	p=head->next;
	printf("\nElements of linkedlist are:");
	while(p!=NULL){
	    printf("%d\n",p->data);
            p=p->next;
	}		
}
