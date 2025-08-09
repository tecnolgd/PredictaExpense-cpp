#include <iostream>
#include <string>
#include "head.hpp"
#include "menu.cpp"
#include "userBudget.cpp"
#include "history.cpp"
#include "dailyLog.cpp"
#include "insights.cpp"
#include "warning.cpp"
#include "weekLog.cpp"


    /*int askBudget();
    void dailyExpLog();
    void warning();
    void weekLog();
    void dispHistory();
    void insights();
    void menu();*/
int main(){
    int choice,budget;
    
    
    do{
        menu();
        std::cout<<"Enter your choice :";
        std::cin>>choice;

    switch(choice){
        case 1: budget= askBudget();
            break;
        case 2: dailyExpLog();
            break;
        case 3:warning();
            break;
        case 4:weekLog();
            break;
        case 5:dispHistory();
            break;
        case 6: insights();
            break;
        default:
            std::cout<<"Invalid choice"<<'\n';
        
    }
    }while(choice !=0);
    std::cout<<"Thank you, have a nice day."<<'\n';
    std::cout<<"-----------------"<<'\n';
    return 0;

}
