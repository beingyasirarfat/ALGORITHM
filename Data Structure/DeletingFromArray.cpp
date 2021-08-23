#include<bits/stdc++.h>
using namespace std;
int rem(int *arr,int size,int index){
        if(index>=size || index<0) return -1;
        while (index<size-1)
        {
                arr[index] = arr[index+1];
                index++;
        }
        return 1;
        
}
int main(){
        int arr[10] = {2,45,63,65,23,64,23,78,45,52};
        rem(arr,10,5);
        for (size_t i = 0; i < 9; i++)
        {
                cout<<arr[i]<<" ";
        }
        
        
}