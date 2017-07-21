#include<stdio.h>
#include<stdlib.h>

struct link{
int data;
struct link *next;	
};
struct link *HEAD=NULL;
void Display(){
struct link *curren=HEAD;
while(curren!=NULL){
printf("%d\n",curren->data);
curren=curren->next;	
}
}
void CreateNode(int a){
struct link *node=HEAD;
node=(struct link*)malloc(sizeof(struct link));
node->data=a;
node->next=NULL;
if(HEAD==NULL){
node=HEAD;	
}
else{
	struct link *curren=HEAD;	
while(curren	->next!=NULL){
	curren=curren5->next;
}
curren->next=node;	
}
}
int main(){
CreateNode(10);	
CreateNode(16);	
CreateNode(30);	
CreateNode(80);	
Display();
return 0;
}