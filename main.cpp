//This code contains the main flow of the application with function calls and flow logic.
#include <iostream>
#include <string>
#include <vector>
#include "head.hpp"

int main(){
    int choice=0,test=1,ch;
    int session_counter =0;
    int day_count=0;
    double budget;
    double tot_exp,save,cumulat_exp=0.0;
    bool x=true;
    
    do{                                            //loop for entire operation
        menu();
        if(test==0){
            std::cout<<"Invalid choice !.TRY AGAIN..\n";
            test=1;
        }
        std::cout<<"Enter your choice :";
        std::cin>>choice;
        
        switch(choice){
            case 1: budget= askBudget();
                    break;
            case 2: tot_exp=dailyExpLog(session_counter);
                    cumulat_exp +=tot_exp;  //to caculate cumulative total costs over the passed days
                    day_count++;
                    break;
            case 3: save=warning(budget,cumulat_exp,day_count);
                    break;
            case 4: weekLog(session_counter);
                    break;
            case 5:dispHistory();
                    break;
            case 6: insights(save,budget,day_count);
                    break;
            case 7: x=false;
                    break;
            default:test=0;
                    break;
        }  
    }while(x);

    std::cout<<"Thank you, have a nice day."<<'\n';
    std::cout<<"-----------------"<<'\n';
    return 0;
}
