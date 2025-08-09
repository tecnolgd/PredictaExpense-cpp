#include <iostream>
#include <string>
#include "head.hpp"
/**/


    /*int askBudget();
    void dailyExpLog();
    void warning();
    void weekLog();
    void dispHistory();
    void insights();
    void menu();*/
int main(){
    int choice=0,test=1;
    double budget;
    bool x=true;
    
    
    do{ 
        
        menu();
        if(test==0){
            std::cout<<"Invalid choice.TRY AGAIN.o.\n";
            test=1;
        }
        std::cout<<"Enter your choice :"<<std::endl;
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
            case 7: x=false;
                break;
            default : test=0;
                break;
         }  

    }while(x);

    std::cout<<"Thank you, have a nice day."<<'\n';
    std::cout<<"-----------------"<<'\n';
    
    return 0;

}
