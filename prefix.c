#include<stdio.h>
#include<string.h>
int main()
{
  long int n,i;
  scanf("%ld",&n);
  char str[n][100000];
  for(i=0;i<n;i++)
    scanf("%s",str[i]);
  long int length=strlen(str[0]);
  for(i=0;i<length;i++)
  {
    char a=str[0][i];
    long int j;
    long int count=0;
    for(j=0;j<n;j++)
    {
      if(a==str[j][i])
        count++;
      else
        break;
    }
    if(count==n)
      printf("%c",a);
  }
}
