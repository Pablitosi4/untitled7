//
// Created by Student on 14.12.2018.
//
#include <iostream>
#ifndef UNTITLED7_ISOTOPE_H
#define UNTITLED7_ISOTOPE_H
class isotope{
    std::string name;
    double Z;
    double A;
public:
    const std::string &getName() const {
        return name;
    }

    double getZ() const {
        return Z;
    }

    double getA() const {
        return A;
    }

    void setName(const std::string &name) {
        isotope::name = name;
    }

    void setZ(double Z) {
        isotope::Z = Z;
    }

    void setA(double A) {
        isotope::A = A;
    }
    isotope(std::string name,double Z,double A){
        if (Z<A){ setName(name); setA(A);setZ(Z);}
            else
        {printf("err z>a");}
    }
};
#endif //UNTITLED7_ISOTOPE_H
