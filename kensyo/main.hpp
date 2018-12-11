#include <deque>
#include <list>

template <typename T>
class DequeList
{
    public:
        std::deque<std::list<T>> buffer;
        typename std::deque<std::list<T>>::iterator deque_it;
        typename std::list<T>::iterator list_it;
        void pushback(const std::list<T> obj);
        T get();
};