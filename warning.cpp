#include "head.hpp"
#include <iostream>

double warning(double bud,double exp,int day_pass) //day_pass = no of days passed
{   double tot_save=bud-exp;
    double avg_save=tot_save/(30-day_pass);
    double predict_save = avg_save*30.5; //prediction logic
    std::cout<<"____________________________"<<std::endl;
    if(predict_save<0.0){
        std::cout<<"Warning : You are overspending ! Savings :"<<predict_save<<std::endl;
    }
    else{
        std::cout<<"Well done ! You are on the way to save "<<predict_save<<" by the end of the month\n";
        std::cout<<day_pass<<" "<<exp;
    }
    std::cout<<"____________________________"<<std::endl;
    return predict_save;
}
    


