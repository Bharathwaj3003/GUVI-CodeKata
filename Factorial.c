#include<stdio.h>
int main()
{
  long long int fact=1;
  int n;
  scanf("%d",&n);
  if(n>20)
    return 0;
  while(n>0)
  {
    fact=fact*n;
    n--;
  }
  printf("%lld",fact);
  return 0;
}
