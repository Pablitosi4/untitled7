//
// Created by Student on 14.12.2018.
//
#include <vector>
#include <iostream>
#ifndef UNTITLED7_MATERIAL_H
#define UNTITLED7_MATERIAL_H
class material{
    std::string name;
    double density;
    std::vector<element> el;
    int n;
public:
    const std::string &getName() const {
        return name;
    }
    double getDensity() const {
        return density;
    }
    const std::vector<element> &getEl() const {
        return el;

    }
    int getN() const {
        return n;
    }
    void setName(const std::string &name) {
        material::name = name;
    }
    void setDensity(double density) {
        material::density = density;
    }
    void setEl(const std::vector<element> &el) {
        material::el = el;
    }
    void setN(int n) {
        material::n = n;
    }
    material(std::string name,double density,int n):name(name),density(density),n(n){}
    void AddElement(element* elem,double fm){
        for (int i;i<=n;i++)
            el.emplace_back(&elem);
    }
};
#endif //UNTITLED7_MATERIAL_H
