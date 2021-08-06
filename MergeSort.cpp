#include<iostream>
using namespace std;

int merge(int arr[], int l , int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1], b[n2]; //temp arrays

    for(int i = 0; i < n1 ; i++){
        a[i] = arr[l+i];
    }
    for(int i = 0; i < n2 ; i++){
        b[i] = arr[mid+i+1];
    }
    int i=0; 
    int j=0;
    int k =l;
    while (i<n1 && j<n2)
    {
        /* code */
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;j++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
            k++;
            i++;
    }
    while(j<n2){
         arr[k] = b[j];
            k++;j++;

    }  
}

int mergeSort(int arr[],int l , int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }  
}

int main(){
    int n =8; 
    int arr[n] = {6,3,9,5,2,8,7,1};
    mergeSort(arr,0,n);
    for(int i = 0; i <n ; i++){cout<<arr[i]<<" ";}
    return 0;
}