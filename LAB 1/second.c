#include <stdio.h>
void search(int n,int key,int array[]) 
{
  int i, low, high, mid;
  low = 0;
  high = n - 1;
  mid = (low+high)/2;
  int comp=0;
  while (low <= high) 
  {
     comp=comp+1;
     mid = (low+high)/2;
     if (array[mid] == key)
     {
        printf("Key found!!!\n");
        break;
     }
     else if(array[mid] < key)
     {
         low = mid+1;
     }
     else
     {
         high = mid-1;
     }
  }
  if(low > high)
  {
      printf("Key Not found!!!!!\n");
  }
  printf("Total no.of Comparisons %d",comp);
}
int main()
{
    int n,i,key;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key value you want to search: ");
    scanf("%d",&key);
    search(n,key,arr);
}
