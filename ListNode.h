#ifndef LISTNODE_H
#define LISTNODE_H

template <typename T>
class List;

template <typename T>
class ListNode
{
	friend class List<T>;

public:
	ListNode(T);
	T getData();

private:
	T data;
	ListNode* nextPtr;
};

#endif
