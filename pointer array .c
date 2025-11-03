#include <stdio.h>
int main() {
  int arr[10],i,n;
  int *ptr;
  ptr=arr;
  printf("enter the number of elements\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",ptr+i);
  }
  for(i=0;i<n;i++)
  {
      printf("%d",*(ptr+i));

  }
  
  
}
