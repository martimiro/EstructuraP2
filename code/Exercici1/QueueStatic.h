#ifndef QUEUESTATIC_H
#define QUEUESTATIC_H

class QueueStatic
{
private:
    int _max_elements;
    int _num_elements;
    int _first;
    int _last;
    int *_content;

public:
    QueueStatic(const int max_size);
    virtual ~QueueStatic();
    void enqueue(const int key);
    void dequeue();
    bool isFull();
    bool isEmpty();
    void print();
    const int getFront();
    void printFrontRear();
};

#endif /* QUEUESTATIC_H */