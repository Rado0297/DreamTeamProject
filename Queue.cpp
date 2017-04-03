#include <iostream>
#include "Queue.h"

template <class T>
Queue<T>::Queue()
{
    a = new T[100];
    start = 0;
    rear = 0;
    n = 0;
}

template <class T>
Queue<T>::~Queue()
{
    deleteQueue();
}

template <class T>
Queue<T>::Queue(Queue<T> const& r)
{
    Copy(r);
}

template <class T>
Queue<T>& Queue<T>::operator=(Queue<T> const& r)
{
    if(this != &r)
    {
        deleteQueue();
        Copy(r);
    }
    return *this;
}

template <class T>
void Queue<T>::insertElement(T const & x)
{
    if(n == 100)
    {
        std::cout<<"The queue is full!\n";
    }
    else
    {
        a[rear] = x;
        n++;
        rear++;
        rear = rear % 100;
    }
}

template <class T>
int Queue<T>::deleteElement(T &x)
{
    if(n > 0)
    {
        x = a[start];
        n--;
        start++;
        start = start % 100;
        return 1;
    }
    else
    {
        return 0;
    }
}

template <class T>
void Queue<T>::print()
{
   T x;
   while(deleteElement(x))
   {
       std::cout << x << " ";
   }
    std::cout << '\n';
}

template <class T>
bool Queue<T>::Empty() const
{
    return n == 0;
}

template <class T>
void Queue<T>::deleteQueue()
{
    delete [] a;
}

template <class T>
void Queue<T>::Copy(Queue<T> const &r)
{
    a = new T[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = r.a[i];
    }
    n = r.n;
    start = r.start;
    rear = r.rear;
}
