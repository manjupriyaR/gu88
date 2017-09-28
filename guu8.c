void minAbsSumPair(int arr[], int n)
{
    int l, r , min_sum, sum = 0, min_l, min_r;
    if(n < 2)
    {
        printf("Invalid Input");
        return;
    }
   quickSort(arr, 0, n-1);
     l = 0; r = n-1;
    min_sum = arr[l] + arr[r];
    min_l = l;
    min_r = r;
     
    while(l < r)
    {
        sum = arr[l] + arr[r];
        if(abs(sum) < abs(min_sum))
        {
            min_sum = sum;
            min_l = l;
            min_r = r;
        }
        if(sum < 0)
            l--;
        else
            r++;
    }
 printf(" The two elements whose sum is minimum are %d and %d",arr[min_l], arr[min_r]);
}
int main()
{
    int arr[] = {15, 5, -20, 30, -45};
    minAbsSumPair(arr, 5);
    getchar();
    return 0;
}
}
