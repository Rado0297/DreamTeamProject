#ifndef LIST_H
#define LIST_H

template <typename T>
class List
{
public:
	List();
	~List();
	void insertNewNode(T);
	void print();
	ListNode<T>* search(T);

private:
	ListNode<T> *startPtr;
	ListNode<T> *endPtr;
	bool isEmpty();
	void insertBegin(T);
	void insertEnd(T);
};

#endif
