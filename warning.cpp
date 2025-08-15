#include "head.hpp"
#include <iostream>

void warning(double bud,double exp)
{
    std::cout<<"____________________________\n";
    if(bud<exp){
        std::cout<<"Warning : You are overspending !\n";
    }
    else if(bud==exp){
            std::cout<<"Warning : Your net budget today is ZERO !\n";

    }
    else{
        std::cout<<"Well done !.yoour savinga are progressing.\n";
    }
    std::cout<<"____________________________\n\n";
}
    


