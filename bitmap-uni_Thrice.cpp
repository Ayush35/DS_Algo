#include<iostream>
using namespace std;
bool getBit(int n , int pos){
    return ((n & (1<<pos)) != 0 );
}
int setBit(int n, int pos){
    return (n | (1<< pos));
}
int uniquethrice(int arr[] , int n){
    int result = 0 ;
    for(int i =0; i<64;i++){
        int sum = 0; 
        for(int j = 0 ; j< n ; j++){
            if(getBit(arr[j] , i)){
                sum++;
            }
        }
        if(sum % 3 != 0){
             result = setBit(result , i);
        }
    }
    return result;
}
int main(void){
    int arr[]={1,3,2,3,4,2,1,1,3,2};
    cout<<uniquethrice(arr, 10);
}