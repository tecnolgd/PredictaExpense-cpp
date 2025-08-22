#include "head.hpp"
#include <iostream>

void warning(double bud,double exp)
{   double predict_save;
    predict_save= bud-(exp*30.5); //prediction of budget logic / avg days= 30+31 days =30.5
    std::cout<<"____________________________"<<std::endl;
    if(predict_save<0.0){
        std::cout<<"Warning : You are overspending !\n";
    }
    else if(bud==exp){
            std::cout<<"Warning : Your net budget today is ZERO !\n";
    }
    else{
        std::cout<<"Well done ! You are on the way to save "<<predict_save<<"by the end of the month\n";
    }
    std::cout<<"____________________________"<<std::endl;
}
    


