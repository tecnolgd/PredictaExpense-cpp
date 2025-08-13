#include "head.hpp"
#include <iostream>

void warning(int bud,int exp){

    if(bud<exp){
        std::cout<<"Warning : You are overspending !\n";
        
    }
    else if(bud==exp){
            std::cout<<"Warning : Your net budget today is ZERO !\n";
            
        }
    else{
        std::cout<<"Well done !.yoour savinga are progressing.\n";
    }
    
}
    


