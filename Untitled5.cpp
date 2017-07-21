#include <stdio.h> 
int main(){
   int a[6] = {50, 10, 60, 20, 40, 30};
int i, j, temp;
for(i=0; i<6; i++)
{  for(j=0; j<6-i-1; j++)
  {    if( a[j] > a[j+1])
    {      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
  }  	printf("%d \n",a[i]); }

   return 0;   
}
