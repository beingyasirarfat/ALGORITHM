#include<bits/stdc++.h>
using std::cout;

template<class T>
void Sort(T *a, unsigned long long size){
        for (size_t i = 0; i < size; i++)
        {
                for (size_t j = 1; j < size; j++)
                {
                        if (a[j]<a[j-1])
                        {
                                std::swap(a[j],a[j-1]);
                        }
                        
                }
                
        }
        
}

int main(){
        int Arr[] = {4,3,67,3,1,6,34,78,34,23};
        float Array[] = {3.4, 65.3, 23.676, 23.112, 56,32.34, 56,23.09 };
        Sort(Arr , sizeof(Arr)/sizeof(Arr[0]));
        Sort(Array , sizeof(Array)/sizeof(Array[0]));
        cout<<"integer array:"<<std::endl;
        for (auto i: Arr)
        {
                cout<<i<<" ";
        }
        cout<<std::endl<<"Float array:"<<std::endl;
        for (auto i: Array)
        {
                cout<<i<<" ";
        }
        
}