#include<iostream>
using namespace std;
 void SelectionSort(int arr[], int n)
 {
     int i,j;
     for(i=0;i<n-1;i++){
            int MinValue = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[MinValue]){
                MinValue = j;
            }
            if(MinValue!=i){
                swap(arr[MinValue],arr[i]);
            }
        }
     }

 }
 void Display(int arr[],int size)
 {
     int i;
     for(i=0;i<=size;i++){
        cout<<arr[i]<<" "<<endl;
     }
 }
int main()
{
    int arr[] = {2,5,4,1,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    Display(arr,n);
    SelectionSort(arr,n);
    cout<<"Sorted Array"<<endl;
    Display(arr,n);
    return 0;
}
