#include <iostream>
#include "head.hpp"

void weekLog(int session_counter){
    if (session_counter==7){
        std::cout<<"The weekly report is ready .....\n";
        
    }
    else{
        std::cout<<"The week is not over yet. "<<7-session_counter<<" log days left !!\n";
    }

}