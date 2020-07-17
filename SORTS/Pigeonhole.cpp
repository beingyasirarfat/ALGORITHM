#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void PigeonHole(int *arr,int size){

        auto min = min_element(arr,arr+size);
        auto max = max_element(arr,arr+size);
        unsigned int range = *max - *min +1;

        vector<int> holes[range];
        for(size_t i=0;i<size;i++){
                holes[arr[i] - *min ].push_back( arr[i] );
        }

        size_t index = 0;
        for(size_t i=0;i<range;i++){
                vector<int>::iterator it;
                for(it = holes[i].begin(); it != holes[i].end(); ++it ){
                        arr[index++] = *it;
                }
        }
}
int main(){
        int arr[] = {17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        int size = sizeof(arr)/sizeof(arr[0]);
        PigeonHole(arr, size);
        for (size_t i = 0; i < size ; i++)
        {
                cout<< arr[i] << " ";
        }
        return 0;   
}