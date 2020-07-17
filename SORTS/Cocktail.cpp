#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Cocktail(int *arr,int size){
        size_t start = 0; 
        size_t end = size-1;
        bool swapped = true;
        //untill nothing is to be swapped, ie, nothing to be sorted further
        while (swapped)
        {
                //suppose nothing is to be swapped
                swapped = false;

                //from start to end check and swap
                for (size_t i = start; i < end; i++)
                {
                        if(arr[i]>arr[i+1]){
                                swap(arr[i],arr[i+1]);
                                //something swapped now, maybe further swapping needed
                                swapped = true;
                        }
                }

                if(!swapped) break;//if nothing was swapped the array is sorted, no need to try sorting next part
                end--;

                swapped = false;

                for (size_t i = end; i > start ; i--)
                {
                        if(arr[i]<arr[i-1]){
                                swap(arr[i],arr[i-1]);
                                swapped = true;
                        }
                }

                if(!swapped) break;
                start++;  
        }    
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        Cocktail(arr, size);
        for (size_t i = 0; i < size ; i++)
        {
                cout<< arr[i] << " ";
        }
        return 0;   
}