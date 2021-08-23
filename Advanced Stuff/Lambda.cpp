#include <iostream>

int main()
{
        auto Println = [](auto &n, char end = '\0') { std::cout<<n; end==' '? std::cout<<" ": std::cout<<std::endl; };

        int Array[] = {7, 5, 4, 3, 1};

        for (auto a : Array)
                Println(a, ' ');
        for (auto a : Array)
                Println(a);
}