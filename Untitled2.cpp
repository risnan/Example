#include<stdio.h>
int main(){
int n,c,array[100],first,last,midel,find;
printf("enter the element\n");
scanf("%d",&n);

printf("enter the integer\n");
for(c=0;c<n;c++)
scanf("%d\n",&array[c]);
printf("enter the find number\n");
scanf("%d",&find);
first=0;
last=n-1;
midel=(first+last)/2;
while(first<=last){
if(array[midel]<find)
first=midel+1;
else if(array[midel]==find){
printf("find number\n",find,midel);
break;
}
else
last=midel-1;
midel=(first+last)/2;		
}
if(first>last)
printf("",find);
return 0;
}