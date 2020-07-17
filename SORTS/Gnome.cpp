#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Gnome(int *arr,int size){
   size_t index=0;
   while(index<size){
           //at the start of array stem one tub forward
           if(index==0) index++;
           //if current tub is greater than previous one step forward.
           if(arr[index] >= arr[index-1]) index++;
           //otherwise swap current tub and previous and walk back to previous tub(and observe it)
           else {
                swap(arr[index],arr[index-1]);
                index--;
           }
   }
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        auto Print = [](int &n){ cout << n << " "; };
        Gnome(arr, size);
        for_each(begin(arr),end(arr),Print);
        return 0;   
}