#include <stdio.h>
int main()
{
    int arr[] = {12, 56, 16, 42, 11, 100, 823, 7, 1023};
    int n = sizeof(arr[0]);
    int index = -1;
    int element = 16;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            index = i;
            break;
        }
    }
    if(index==-1)
    {
        printf("Element doesn't exist in array.\n");
    }
    else
    {
        printf("Value 16 index:%d", index);
    }
    return 0;
}
