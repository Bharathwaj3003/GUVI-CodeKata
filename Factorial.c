#include<stdio.h>
int main()
{
  long long int fact=1;
  int n;
  scanf("%d",&n);
  while(n>0)
  {
    fact=fact*n;
    n--;
  }
  printf("%lld",fact);
}
