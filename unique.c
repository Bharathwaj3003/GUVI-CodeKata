
#include<stdio.h>
int main()
{
  long int n;
  scanf("%ld",&n);
  long int arr[n];
  long int i;
  for(i=0;i<n;i++)
  {
    scanf("%ld",&arr[i]);
  }
  int flag=0;
  long int j;
  for(i=0;i<n;i++)
  {
    flag=0;
    for(j=0;j<n;j++)
    {
      if(i==j)
        continue;
      if(arr[i]==arr[j])
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      printf("%d",arr[i]);
      return 0;
    }
  }
}
