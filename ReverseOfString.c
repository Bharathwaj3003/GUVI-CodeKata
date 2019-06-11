#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char str[100000];
  scanf("%s",&str);
  a=strlen(str);
  for(i=a-1;i>=0;i--)
    printf("%c",str[i]);
}
