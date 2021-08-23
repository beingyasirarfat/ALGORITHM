#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class Array
{
        size_t size = 0;
        size_t capacity = 0;
        T *Pointer = NULL;
        bool is_full()
        {
                return capacity <= size;
        }
        void extend()
        {
                if (capacity <= 0)
                        capacity = 1;
                else
                        capacity *= 2;
                T *new_arr = new T[capacity];
                memcpy(new_arr, Pointer, size * sizeof(T));
                delete[] Pointer;
                Pointer = new_arr;
        }

public:
        Array() {}
        Array(size_t N)
        {
                capacity = N > 0 ? N : 0;
                Pointer = new T[capacity];
        }
        void Insert(T a);
        void Print();
        T at(const size_t &i);
};

template <typename T>
void Array<T>::Insert(T a)
{
        if (is_full())
                extend();
        Pointer[size++] = a;
}

template <typename T>
void Array<T>::Print()
{
        for (size_t i = 0; i < size; i++)
        {
                cout << " " << Pointer[i];
        }
}
template <typename T>
T Array<T>::at(const size_t &i)
{
        try
        {
                return Pointer[i];
        }
        catch (const std::exception &e)
        {
                //std::cerr << e.what() << '\n';
        }
}
int main()
{
        Array<float> arr(10);
        arr.Insert(2.5);
        arr.Insert(3);
        arr.Insert(5.7);
        arr.Insert(3);
        cout << "at 2 is " << arr.at(2) << endl;
        arr.Print();
        return 0;
}
