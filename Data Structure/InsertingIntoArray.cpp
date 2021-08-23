#include<bits/stdc++.h>
using namespace std;
int Ins(int *arr, int size,int index, int number){

        if(index>=size) return -1;

        while(index<size){
                swap(arr[index++],number);
        }
        return 1;
}
int main(){
        int arr[10] = {3,4,2};
        
        for(auto i: arr) cout<< i <<" ";
        cout<<endl;
        Ins(arr,10,1,17);
        for(auto i: arr) cout<< i <<" ";
}