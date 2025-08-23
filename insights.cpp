// This code does the insights and strategies computation.
#include "head.hpp"
#include <iostream>

void insights(double saving,double budget,int days){
    std::cout<<"____________________________"<<std::endl;
    std::cout<<"**  INSIGHTS  **\n";
    std::cout<<"Monthly budget :"<<budget<<std::endl;
    if(saving>0){
        std::cout<<"Predicted savings for the month :"<<saving<<std::endl;
    }
    else{
        std::cout<<"Projected overshoot :"<<abs(saving)<<std::endl;
    }
    double target,diff;
    std::cout<<"Enter target saving : ";
    std::cin>>target;
    diff=target-saving; //difference b/w target and savings
    if(target>saving){
        std::cout<<"* STRATEGIES *\n";
        std::cout<<"You are short of "<<diff<<" to reach you savings goal.."<<std::endl;
        std::cout<<"You need to save "<< diff/(30-days)<<" per day to stay on track."<<std::endl; // savings plan for the remaining days
    }
    else{
        std::cout<<"Congratulations ! You have won BIG by saving an extra "<<abs(diff)<<" than your taget savings!!"<<std::endl;
    }
    std::cout<<"____________________________"<<std::endl;
}