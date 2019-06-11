#include<stdio.h>
int main()
{
  long int a;
  scanf("%ld",&a);
  long int arr[a];
  long int i=0,j=0;
  while(j<a)
  {
    long int k;
    scanf("%ld",&k);
    if(k==j)
    {
      arr[i]=k;
      i++;
    }
    j++;
  }
  for(j=0;j<i;j++)
    printf("%ld ",arr[j]);
  return 0;
}
