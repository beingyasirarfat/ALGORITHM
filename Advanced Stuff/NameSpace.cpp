#include<bits/stdc++.h>
using std::cout;
namespace A{
        void Print(){
                cout<<"Hello"<<std::endl;
        }
}
namespace B{
        void Print(){
                cout<<"World"<<std::endl;
        }
}

        void Print(){
                cout<<"How"<<std::endl;
        }

int main(){
        Print();
        B::Print();
        A::Print();
}