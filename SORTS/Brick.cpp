#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Brick(int *arr,int size){
        bool isSorted = false;

        while (!isSorted)
        {
                isSorted = true;

                for (size_t i = 1; i < size-1; i+=2)
                {
                        if(arr[i]>arr[i+1]){
                                swap(arr[i],arr[i+1]);
                                isSorted = false;
                        }
                }


                for (size_t i = 0; i < size -1 ; i+=2)
                {
                        if(arr[i]>arr[i+1]){
                                swap(arr[i],arr[i+1]);
                                isSorted = false;
                        }
                }

        }    
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        Brick(arr, size);
        for (size_t i = 0; i < size ; i++)
        {
                cout<< arr[i] << " ";
        }
        return 0;   
}