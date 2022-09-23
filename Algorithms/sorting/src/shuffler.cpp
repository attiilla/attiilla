#include "shuffler.h"
#include <time.h>

template<class T>
void shuffler<T>::swap(std::vector<T>& v,int a, int b){
    T temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

template<class T>
void shuffler<T>::RandVect(std::vector<T>& v){
    time_t seed;
    std::srand(time(&seed));
    int n = v.size();
    for(int i=0;i<n;i++){
        swap(v,i,std::rand()%n);
    }
}

template<class T>
std::vector<T> shuffler<T>::NewRandVect(const std::vector<T>& v){
    std::vector<T> w = v;
    shuffler<T>::RandVect(w);
    return w;
}

template class shuffler<int>;