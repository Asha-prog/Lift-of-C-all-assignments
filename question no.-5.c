#include<stdio.h>
int main()
{
    int arr[]={34,5,41,92,67};
    int length=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<length;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }
printf("largest element present in given array:%d\n",max);
return 0;
}