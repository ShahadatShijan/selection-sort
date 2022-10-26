//selection sort

#include<stdio.h>
void selection(int arr[], int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(i != min){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

}
void printArray(int A[],int size)
{
    int i;
    for(i=0;i<size;i++){
        printf("%d ",A[i]);
    }
}
int main()
{
    int data[] = {7,50,10,2,4,9,3};
    int length = sizeof(data)/sizeof(data[0]);
    selection(data,length);
    printArray(data,length);
    return 0;
}
