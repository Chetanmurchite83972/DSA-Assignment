#include<stdio.h>
#define SIZE 6
#define Swap(a,b) { int t = a; a = b; b = t; }

void Selection_sort(int arr[SIZE]);
void display(int arr[SIZE]);

int main(){
    int arr[SIZE] = {33,66,44,22,11,55};
    printf("\n Before Sort : \n");
    display(arr);

    Selection_sort(arr);
    printf("\n After Sort : \n");
    display(arr);

    return 0; 
}

void Selection_sort(int arr[SIZE])
{
    int sel_pos,pos;
    int iterations = 0, comparisons = 0;
    for(sel_pos = 0; sel_pos < SIZE-1; sel_pos++)
    {
        iterations++;
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            comparisons++;
            if(arr[sel_pos] > arr[pos])
            {
                Swap(arr[sel_pos],arr[pos]);
            }
        }
    }
    printf("\n Iteration = %d comparisons = %d \n",iterations,comparisons);

}

void display(int arr[SIZE])
{
    for(int i = 0; i<SIZE ; i++)
    {
        printf("%4d",arr[i]);
    }
}