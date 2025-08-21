#include "head.hpp"
#include <iostream>
#include <fstream>

double askBudget()
{
    double budget=1.0;
    int confirm;
    std::cout<<"***********\n";
    std::cout<<"$   BUDGET SETTINGS   $  \n";
    std::cout<<"-----------------"<<'\n';

    do{
        std::cout<<"Please enter your Budget :"<<'\n';
        std::cin>>budget;
        while(budget<=0.0){
            std::cout<<"Invalid budget.Try again !\n";
            std::cin>>budget; 
        }
        std::cout<<"\t--- enter 1 to confirm, 0 to change the budget ---\n";
        std::cin>>confirm;

    }
    while(confirm !=1);

    std::ofstream file("expense_log.txt");
    file<<"BUDGET: "<<budget<<std::endl; //reading budget to the file.

    std::cout<<"-----------------"<<'\n';
    return budget;
}