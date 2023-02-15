#include <stdio.h>
#include<stdlib.h>
void* createArray(int size)
{
 void *arr;
 arr=malloc(sizeof(char)*size*8);
 return arr;
}
int main()
{
 int i,*ptr,size;
 int eSum,oSum,j,k;
 oSum=eSum=0;
 j=k=1;
 scanf("%d",&size);
 ptr=(int*)createArray(size);
 for(i=0;i<size*2;i+=2)
      scanf("%d%d",ptr+i,ptr+i+1);
 for(i=0;i<size*2;i+=2)
  if(ptr[i]%2)
  {
    eSum+=(eSum?ptr[i+1]*j:ptr[i+1]);
    j*=2;
  }
  else
  {
    oSum+=(oSum?ptr[i+1]/k:ptr[i+1]);
    k*=2;
  }
 printf("%d",eSum>oSum?eSum:oSum);
 return 0;
}
