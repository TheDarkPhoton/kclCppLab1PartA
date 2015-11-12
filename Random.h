//
// Created by darkphoton on 12/11/15.
//

#ifndef KCLCPPLAB1PARTA_RANDOM_H
#define KCLCPPLAB1PARTA_RANDOM_H

#include <random>
#include <type_traits>

using namespace std;


class Random {
    mt19937 _mt;

public:
    Random() : _mt(random_device()()) { }

    template <typename T, class = typename enable_if<is_integral<T>::value>::type>
    T integral(T min, T max){
        uniform_int_distribution<T> dist(min, max);
        return dist(_mt);
    }

    template <typename T, class = typename enable_if<is_floating_point<T>::value>::type>
    T real(T min, T max){
        uniform_real_distribution<T> dist(min, max);
        return dist(_mt);
    }
};


#endif //KCLCPPLAB1PARTA_RANDOM_H
