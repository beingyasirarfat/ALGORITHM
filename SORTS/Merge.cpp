#include<bits/stdc++.h>
using namespace std;
void MergeThem(int *arr,int left,int mid,int right){
        int p = mid-left+1;
        int q = right-mid;
        int a[p];
        int b[q];

        for(int i=0;i<p;i++) a[i] = arr[i+left];
        for(int i=0;i<q;i++) b[i] = arr[i+mid+1];

        int i=0,j=0,k=left;
        while (i<p && j<q)
        {
                if(a[i]<=b[j]){
                        arr[k] = a[i++];
                }else{
                        arr[k] = b[j++];
                }k++;
        }
        while (i<p) arr[k++] = a[i++];
        while (j<1) arr[k++] = a[j++];     
}

void Merge(int *arr,int left, int right){
        if(left<right){
                int mid = left + (right-left)/2;

                Merge(arr,left,mid);
                Merge(arr,mid+1,right);
                MergeThem(arr,left,mid,right);
        }
}

int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);

        for (auto i: arr) cout<<i<<" ";cout<<endl;

        Merge(arr, 0,size-1);

        for (auto i: arr) cout<<i<<" ";cout<<endl;

        return 0; 
}