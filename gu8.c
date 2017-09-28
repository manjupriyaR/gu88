#include <stdio.h>
#include <stdlib.h>
void print Repeating(int arr[], int size)
{
  int i;
  printf("The repeating elements are: \n");
  for (i = 0; i < size; i++)
  {
   if (arr[ab(arr[i])] >= 0)
  arr[ab(arr[i])] = -arr[ab(arr[i])];
    else
  printf(" %d ", ab(arr[i]));
  }
}
int main()
{
  int arr[] = {1, 2, 3, 1, 3, 6, 6};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  print Repeating(arr, arr_size);
  
  getchar();
  return 0;
}
