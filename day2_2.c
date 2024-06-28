#include<stdio.h>
#define SIZE 6
void display(int arr[SIZE]);
void Insertion_sort(int arr[SIZE]);


int main()
{
    int arr[SIZE] = {55,44,22,66,11,33};

    printf("\n Before sort : \n");
    display(arr);

    Insertion_sort(arr);
    printf("\n After sort : \n");
    display(arr);
    return 0;
}

void Insertion_sort(int arr[SIZE])
{
    int i,temp,j;
    for(i=1; i<SIZE; i++)
    {
        temp =arr[i];
        for(j=i-1; j>=0 && temp < arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

void display(int arr[SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        printf("%4d",arr[i]);
    }
}
