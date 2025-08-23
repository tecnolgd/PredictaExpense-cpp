//This code generates warnings with relevant data if applicable
#include "head.hpp"
#include <iostream>

double warning(double bud,double exp,int day_pass) //day_pass = no of days passed
{  
    double avg_save=exp/day_pass;
    double predict_save = bud-(avg_save*30.5); //savings prediction logic
    std::cout<<"____________________________"<<std::endl;
    if(predict_save<0.0){
        std::cout<<"Warning : You are overspending ! Projectect to overshoot the budget by "<<abs(predict_save)<<" this month."<<std::endl;
    }
    else{
        std::cout<<"Well done ! You are on the way to save "<<predict_save<<" by the end of the month.\n";
    }
    std::cout<<"____________________________"<<std::endl;
    return predict_save;
}
    


