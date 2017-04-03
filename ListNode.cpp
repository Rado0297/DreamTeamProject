#include "ListNode.h"
#include <iostream>

template <typename T>
ListNode<T>::ListNode(T dataIn)
{
	data = dataIn;
	nextPtr = 0;
}

template <typename T>
T ListNode<T>::getData()
{
	return data;
}

