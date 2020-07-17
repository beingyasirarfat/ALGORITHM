#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Bubble(int *arr,int size){
        for(size_t i=0;i<size; i++ )
                for(size_t j=0;j<size;j++)
                        if(arr[i]<arr[j]) swap(arr[i],arr[j]);
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        Bubble(arr, size);
        for (size_t i = 0; i < size ; i++)
        {
                cout<< arr[i] << " ";
        }
        return 0;   
}