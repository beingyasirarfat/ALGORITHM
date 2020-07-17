#include<bits/stdc++.h>
using namespace std;
#define whats(x) cout<< #x << " is " << x <<endl;

void Strand(list<int> & input, list<int> & output){
        //if original list is exhusted, return;
        if(input.empty()) return;

        list<int> sub;

        //cut the first element of original list to temporary list.
        sub.push_back( input.front() );
        input.pop_front();
        
        //if any of the element in original list is greater than last inserted element in temporary list,
        //insert it into temporary list and pop it from original list
        for(auto it = input.begin(); it != input.end(); ){
                if(*it > sub.back() ){
                        sub.push_back(*it);
                        it = input.erase( it );
                }
                else it++;
        }

        //As both lists are merges, they are sorted.
        output.merge(sub);
        //repeat for rest of the array
        Strand(input,output);
}
int main(){
        list<int> input{17, 405, 590, 696, 352, 284, 624, 854, 177, 293, 484, 17, 23, 1993, 854, 100, 55, 72};
        list<int>output;
        Strand(input,output);
        for (auto i: output) cout<< i << " ";
        return 0;   
}