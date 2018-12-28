#include "main.hpp"
#include <cstdlib>
#include <memory>
#include <cassert>
#include <iostream>

class Dummy
{
    public:
        int con = 0;
        int copy = 0;
        Dummy()
        {
            con += 1;        
        }

        Dummy(const Dummy& d)
        {
            copy += 1;
        }

        int getCopy()
        {
            return copy;
        }
};

template <typename T>
void DequeList<T>::pushback(const std::list<T>& obj)
{
    size_t dequePos;
    size_t listPos;
    if(this->buffer.size() != 0)
    {
        dequePos = std::distance(this->buffer.begin(), this->deque_it);
        listPos = std::distance((*(this->deque_it)).begin(), this->list_it);
    }

    this->buffer.push_back(obj);

    if(this->buffer.size() == 1)
    {
        this->deque_it = this->buffer.begin();
        this->list_it = (*(this->deque_it)).begin();
    }
    else
    {
        this->deque_it = std::next(this->buffer.begin(), dequePos);
        this->list_it = std::next((*(this->deque_it)).begin(), listPos);
    }
}

template <typename T>
T DequeList<T>::get()
{
    auto ret = *(this->list_it);

    // update iterator
    std::advance(this->deque_it, 1);
    this->list_it = (*(this->deque_it)).begin();

    return ret;
}

template class DequeList<double>;
template class DequeList<Dummy>;

int main(int argc, char const *argv[])
{
    int size = std::atoi(argv[1]);
    auto dl = std::make_shared<DequeList<double>>();

    double count = 1;
    for(int i=0; i<size; ++i)
    {
        double push = count + (double)i;
        std::list<double> ls{push};
        dl->pushback(ls);
    }

    for(int i=0; i<size; ++i)
    {
        std::cout << dl->get() << std::endl;
    }


    return 0;
}
