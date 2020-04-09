#include<stdio.h>

void swap(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<=n-1;i++)

    {
        for(j=0;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
               {
                swap(a,j,j+1);
               }
        }
    }
}

void main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values of array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubble_sort(arr,n);
    printf("Sorted\n");
    for(int j=0;j<n;j++)
        printf("%d  ",arr[j]);

}
