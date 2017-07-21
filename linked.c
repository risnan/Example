#include<stdio.h>
#include<stdlib.h>

struct listItame{
int mak;
struct listItame *next;	
};
struct listItame *HEAD=NULL;
void Display(){
struct listItame *current=HEAD;	
while(current !=NULL){
	printf("%d\n",current->mak);
	current=current->next;
}	
}
void CreateNode(int a){
	struct listItame *new_node=NULL;
	new_node=(struct listItame*)malloc(sizeof(struct listItame));
new_node->mak=a;
new_node->next=NULL;
if(HEAD==NULL){
	HEAD=new_node;
}
else{
struct listItame *current=HEAD;
while(current->next!=NULL){
	current=current->next;
}	
current->next=new_node;
}
}
void DeleteNode(int a){
	struct listItame *current=HEAD;
	struct listItame *tem=NULL;
	struct listItame *pre=current;
	while(current!=NULL){
		if(current->mak==a){
			tem=current;
			break;
		}
		pre=current;
	current=current->next;
	}
pre->next=current->next;
free(current);	
}
int main(){
CreateNode(10);
CreateNode(20);
CreateNode(21);
CreateNode(22);
CreateNode(23);
Display();
DeleteNode(10);
printf("after delete");
Display();
return 0;	
}