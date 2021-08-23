#include <bits/stdc++.h>
using namespace std;

template <class T>
class List
{
	class Node
	{
		T data;
		Node *next;

	public:
		Node(T content)
		{
			data = content;
			next = NULL;
		}
	};
	Node *Head = NULL;
	void insert(const T content);
	void insert_at(const size_t &index, T content);
	void at(const size_t &index);
	void front();
	void back();
	void pop_back();
	void pop_at(const size_t &);
};
template <class T>
void List<T>::insert(const T content)
{
	Node *n = Head;
}

/* Driver code*/
int main()
{
	List<int> list;
	list.insert(3);
	list.insert(5);
	list.insert(9);
	list.insert(34);
	list.insert(12);
	return 0;
}

// This code is contributed by rathbhupendra
