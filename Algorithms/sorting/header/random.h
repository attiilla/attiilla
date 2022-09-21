#ifndef RANDOM_H
#define RANDOM_H
#include <vector>
namespace utils{
    template<class T>
    class random{
        
        static void RandVect(std::vector<T> v);

        static std::vector<T> NewRandVect(std::vector<T> v);

        static int RandInt();

        static double RandDouble(); 
    };
}
//add in src file: template class random<int>;
#endif //RANDOM_H