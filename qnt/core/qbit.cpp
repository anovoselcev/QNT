#include "qbit.hpp"
#include <cmath>
#include <utility>

namespace qnt{

    void QBit::normalize(){
        double n = sqrt(zero_ * zero_ + one_ * one_);
        zero_ /= n;
        one_  /= n;
    }

    QBit::QBit(double zero, double one) noexcept : zero_(zero), one_(one)  {
        normalize();
    }

    void QBit::not() noexcept{
        std::swap(one_, zero_);
    }

}