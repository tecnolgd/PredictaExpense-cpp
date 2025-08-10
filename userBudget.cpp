#include "head.hpp"
#include <iostream>

int askBudget(){
    double budget;
    std::cout<<"*********\n";
    std::cout<<"$   BUDGET SETTINGS  $  \n";
    std::cout<<"-----------------"<<'\n';
    std::cout<<"Please enter your Budget :"<<'\n';
    std::cin>>budget;
    return budget;

    
}