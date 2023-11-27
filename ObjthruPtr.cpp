#include <iostream>
#include "cylinder.h"

int main()
{
    Cylinder c1(10, 2);
    std::cout << c1.volume() << '\n';

    Cylinder *c2 = new Cylinder(11, 20); // creates object on heap
    std::cout << c2->volume() << '\n';

    // managing a stack object through pointers
    Cylinder *p_c1 = &c1;

    std::cout << p_c1->volume() << std::endl;

    //create a heap object through pointers
    Cylinder *p_c2 = new Cylinder(100, 2); // new heap object

    std::cout << p_c2 ->volume() << '\n';
    std::cout << p_c2 -> get_base_radius() << '\n';

    delete p_c2;
    delete c2;

    return 0;
}