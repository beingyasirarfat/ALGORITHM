#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Insertion(int *arr,size_t size){
        for(size_t i=1;i<size;i++){
                int j=i-1;
                int element = arr[i];
                while(j>=0 && arr[j]>element){
                        arr[j+1] = arr[j];
                        j--;
                }
                arr[j+1] = element;
        }    
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        Insertion(arr, size);
        for (size_t i = 0; i < size ; i++)
        {
                cout<< arr[i] << " ";
        }
        return 0;   
}