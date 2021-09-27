#include "not.hpp"

namespace qnt{

    void not(QBit& qb){
        qb.not();
    }

    QBit not(const QBit& qb){
        QBit nqb(qb);
        nqb.not();
        return nqb;
    }

}