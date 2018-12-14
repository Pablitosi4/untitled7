#include <iostream>
#include "isotope.h"
#include "element.h"
//#include "material.h"

int main() {
    isotope j("o",8,16);
    std::cout << j.getZ() << std::endl;
element kl("hj",2);
std::vector<isotope> v;
kl.AddIsotope(j,3,v);
   for (const auto &item:v){std::cout<<&item<<'\n';}
    return 0;
}