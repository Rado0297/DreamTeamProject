#include "List.h"
#include "ListNode.h"
#include <iostream>

template <typename T>
List<T>::List()
{
	startPtr = nullptr;
	endPtr = nullptr;
}

template <typename T>
List<T>::~List()
{
	if ( !isEmpty() )
   {
      ListNode<T> *currentPtr = startPtr;
      ListNode<T> *tempPtr;

      while ( currentPtr != 0 )
      {
         tempPtr = currentPtr;
         currentPtr = currentPtr->nextPtr;
         delete tempPtr;
      }
   }
}

template <typename T>
bool List<T>::isEmpty()
{
	if(startPtr == nullptr && endPtr == nullptr)
    {
        return true;
    }
	else
    {
        return false;
    }
}

template <typename T>
void List<T>::insertBegin(T dataIn)
{
	if(isEmpty())
	{
		ListNode<T> * newPtr = new ListNode<T>(dataIn);
		startPtr = newPtr;
		endPtr = newPtr;
	}
	else
	{
		ListNode<T> * newPtr = new ListNode<T>(dataIn);
		newPtr->nextPtr = startPtr;
		startPtr = newPtr;
	}
}

template <typename T>
void List<T>::insertEnd(T dataIn)
{
	if(isEmpty())
	{
		ListNode<T> * newPtr = new ListNode<T>(dataIn);
		startPtr = newPtr;
		endPtr = newPtr;
	}
	else
	{
		ListNode<T> * newPtr = new ListNode<T>(dataIn);
		endPtr->nextPtr = newPtr;
		endPtr = newPtr;
	}
}

template <typename T>
void List<T>::insertNewNode(T dataIn)
{
	if(isEmpty())
	{
		insertBegin(dataIn);
	}
	else
	{
		if(dataIn < startPtr->data)
		{
			insertBegin(dataIn);
		}
		else
        {
            if(dataIn >= endPtr->data)
            {
                insertEnd(dataIn);
            }
            else
            {
                ListNode<T> * currentPtr = startPtr;
                ListNode<T> * newPtr = new ListNode<T>(dataIn);
                while(currentPtr != endPtr)
                {
                    if((newPtr->data < currentPtr->nextPtr->data) && (newPtr->data >= currentPtr->data))
                    {
                        ListNode<T> * next = currentPtr->nextPtr;
                        currentPtr->nextPtr = newPtr;
                        newPtr->nextPtr = next;
                        break;
                    }
                    currentPtr = currentPtr->nextPtr;
                }
            }
        }
	}
}

template <typename T>
void List<T>::print()
{
	if(isEmpty())
	{
		std::cout << "The list is empty" << '\n';
	}
	else
	{
		ListNode<T> * currentPtr = startPtr;
		std::cout << "The contents of the list is: ";
		while(currentPtr != nullptr)
		{
			std::cout << currentPtr->data << ' ';
			currentPtr = currentPtr->nextPtr;
		}
		std::cout << '\n';
	}
}

template <typename T>
ListNode<T>* List<T>::search(T key)
{
	ListNode<T>* nodePtr;
	bool found = false;
	nodePtr = startPtr;
	while((!found) && (nodePtr != nullptr))
	{
		if(nodePtr->data == key)
			{
			    found = true;
			}
		else
			{
			    nodePtr = nodePtr->nextPtr;
			}
	}
	return nodePtr;
}


