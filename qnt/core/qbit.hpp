#pragma once

namespace qnt{

    class QBit{

        double zero_ = 1;
        double one_  = 0;

        void normalize();

        public:

        void not() noexcept;

        QBit() = default;

        QBit(double zero, double one) noexcept;

        QBit(const QBit& qb) = delete;

        QBit& operator=(const QBit& qb) = delete;

        QBit(QBit&& qb) = default;

        QBit& operator=(QBit&& qb) = default;      
    };
}