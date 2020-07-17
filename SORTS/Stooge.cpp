#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Stooge(int *arr,int low, int high){
        if(low>=high) return;
        if (arr[low] > arr[high]) swap(arr[low], arr[high]);
        if(high - low>1){
                int t = (high - low +1)/3;
                Stooge(arr,low,high-t);
                Stooge(arr,low+t,high);
                Stooge(arr,low,high-t);
        }
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        Stooge(arr, 0, size-1);
        for (size_t i = 0; i < size ; i++)
        {
                cout<< arr[i] << " ";
        }
        return 0;   
}