#include<stdio.h>
int main()
{
  long long int a,b;
  scanf("%lld",&a);
  b=0;
  while(a>0)
  {
    b=(b*10)+(a%10);
    a=a/10;
  }
  printf("%lld",b);
  return 0;
}
