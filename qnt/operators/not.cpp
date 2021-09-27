#include "not.hpp"
#include "../core/qbit.hpp"
#include <utility>

namespace qnt{

    void not(QBit& qb){
        std::swap(qb.zero_, qb.one_);
    }

}