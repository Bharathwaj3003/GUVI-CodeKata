#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char str[100000];
  scanf("%s",&str);
  a=strlen(str);
  if(a>100000)
    return 0;
  for(i=a-1;i>=0;i--)
    printf("%c",str[i]);
  return 0;
}
