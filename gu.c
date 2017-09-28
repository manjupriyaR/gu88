#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void print Re(int arr[], int size)
{
  int i, j;
  printf(" Re elements are ");
  for(i = 0;i<size;i++)
    for(j = i+1; j < size; j++)
      if(arr[i==arr[j]])
        printf(" %d ",arr[i]);
}     
 
int main()
{
  int arr[] = {4, 2, 4, 5, 2, 3, 1};
  int arr_size = size of(arr)/size of(arr[0]);  
  print Re(arr, arr_size);
  getchar();
  return 0;
  }
