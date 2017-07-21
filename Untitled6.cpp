#include<stdio.h>
int main(){
int c,j,n,i ,a[100],temp;
printf("enter the element\n");
scanf("%d",&n);
printf("enter the integer\n");

for(c=0;c<n;c++){
scanf("%d",&a[c]);}
printf("sorting\n");	
for(i=0; i<n; i++)
{  for(j=0; j<n-i-1; j++)
  {    if( a[j] > a[j+1])
    {      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
  }  	printf("%d \n",a[i]); }

return 0;	
}