#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class Queue
{
public:
    Queue();
    ~Queue();
    Queue(Queue const &);
    Queue& operator=(Queue const &);
    void insertElement(T const &);
    int deleteElement(T &);
    void print;
    bool Empty() const;

private:
    int start, rear, n;
    T *a;
    void deleteQueue();
    void Copy(Queue const &);
};

#endif // QUEUE_H
