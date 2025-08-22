#include<iostream>
using namespace std;

int linerSearch(int arr[], int size, int target){
    for(int i= 0; i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,1,7,5,10};
    int size = 7;
    int target = 8;
    cout<<linerSearch(arr,size,target)<<endl;
    return 0;
}