#include<stdio.h>
int main()
{
  long int n;
  scanf("%ld",&n);
  long int i,j,k;
  long int arr[n];
  long int count=0;
  for(i=0;i<n;i++)
  {
    scanf("%ld",&arr[i]);
  }
  for(i=0;i<n-2;i++)
  {
    for(j=i+1;j<n-1;j++)
    {
      for(k=j+1;k<n;k++)
      {
        if(arr[i]<arr[k]&&arr[j]<arr[k])
          count++;
      }
    }
  }
  printf("%ld",count);
}
