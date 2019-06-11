#include<stdio.h>
int main()
{
  long long unsigned int a,b,c;
  scanf("%llu %llu %llu",&c,&a,&b);
  while(c>0)
  {
    if((c/a)%2==0)
    {
      c=c-((c/a)*a);
    }else
    {
      c=c-((c/a)-1)*a;
    }
    
    if((c/b)%2==0)
    {
      c=c-((c/b)*b);
    }else
    {
      c=c-((c/b)-1)*b;
    }
    if(c<=a&&c<=b&&c!=0)
    {
      printf("NO");
      return 0;
    }
  }
  if(c==0)
    prinf("YES");
}
