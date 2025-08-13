#include "head.hpp"
#include <iostream>

char warning(int bud,int exp){
    if(bud<exp){
        std::cout<<"Warning : You are overspending !\n";
        return 'H';
    }
    else {
        if(bud==exp){
            std::cout<<"Warning : Your net budget today is ZERO !\n";
            return 'L';
        }
    }
}
    


