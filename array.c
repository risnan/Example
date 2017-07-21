#include<stdio.h>
int main(){
int sum=0;	
int age[5]={30,60,45,23,56};
for(int i=0;i<5;i++){
sum=sum+age[i];	
printf("%d\n",sum);
}	

return 0;
}