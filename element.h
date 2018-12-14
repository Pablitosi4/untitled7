//
// Created by Student on 14.12.2018.
//
#include <vector>
#include <iostream>
#ifndef UNTITLED7_ELEMENT_H
#define UNTITLED7_ELEMENT_H
class element{
    std::vector<isotope> vect;
    std::string name;
    int cal;
public:
    const std::vector<isotope> &getVet() const {
        return vect;
    }
    const std::string &getName() const {
        return name;
    }
    int getCal() const {
        return cal;
    }
    void setVect(const std::vector<isotope> &vect) {
        element::vect = vect;
    }
    void setName(const std::string &name) {
        element::name = name;
    }
    void setCal(int cal) {
        element::cal = cal;
    }
    element(std::string name,int cal):name(name),cal(cal) {}
    void AddIsotope(isotope iso, double fm,std::vector<isotope> vect){
     // for (int i;i<cal;i++)
        vect.emplace_back(iso);
    }
    //void print(std::vector<isotope> vect){
        //for (const auto &item:vect){std::cout<<item<<'\n';}
    //}

};
#endif //UNTITLED7_ELEMENT_H
