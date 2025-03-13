#include 'QueueStatic.h'

QueueStatuc::QueueStatic(const int max_size)
{
    _max_elements = max_size;
    _num_elements = 0;
    _first = 0;
    _last = 0;
    _content = new int[_max_elements];
}