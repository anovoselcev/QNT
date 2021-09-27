#include "adamar.hpp"
#include "../core/qbit.hpp"

namespace qnt{

    void adamar(QBit& qb){
        double zero = qb.zero_ + qb.one_;
        double one  = qb.zero_ - qb.one_;
        qb.zero_ = zero;
        qb.one_  = one;
        qb.normalize();
    }
}