#ifndef SHUFFLER_H
#define SHUFFLER_H
#include <vector>
#include <cstdlib>

template<class T>
class shuffler{
public:
    static void RandVect(std::vector<T>& v);
    static std::vector<T> NewRandVect(const std::vector<T>& v);
    static void swap(std::vector<T>& v,int a, int b);
};

//add in src file: template class random<int>;
#endif //shuffler_H