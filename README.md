![MIT License](https://img.shields.io/github/license/tecnolgd/PredictaExpense-cpp.svg)
![Static Badge](https://img.shields.io/badge/tools-Open_Source-blue)
![Static Badge](https://img.shields.io/badge/interface-CLI-white)
![Static Badge](https://img.shields.io/badge/version-1.1-red)



# PREDICTA EXPENSE💰🔮
### A logical CLI-based expense & savings tracker with predictive insights — built to help you control today and forecast future savings.    
### Utilises the logic of savings prediction to give current-day insights on month-end savings and other useful data.
 ---
 ## Features ⚙️
 * Track daily expenses with ease.
 * Predict savings based on user spending patterns w.r.t monthly income/budget.
 * Display weekly expense log & all-time expense log.
 * Provide insights and strategies including warnings and useful data.
 * Multifile modular design (C++ project structure).
 * Fast, menu-driven interface for smooth navigation.
 ---
 ## Tech stack 🚀🚀
 * Language: C++
 * Paradigm: Modular programming with file separation.
 * Core concepts: File handling, menu systems, predictive logic, conditions and iterations.( Slight pointer concepts ).
 * Interface: CLI (command-line interface).
 ---
 ## Novel concepts practiced 🆕
 * Vectors
 * Pointers (pass by reference/address)
 * File handling
 * Multi-file compilation
 ---
 ## How it works ❓
 1) Enter monthly budget/income once at the start of the application.
 2) Select the "Add EXPENSE" option and enter expenses with respective costs.
 3) The weekly report can be viewed only when 7 days of expense logging is done.
 4) The all-time history can be viewed anytime.
 5) Select the "WARNINGS" option from the menu and view current day warnings based on history of expense logging.
 6) The insights and strategies can be viewed anytime and useful data can be interpreted.
 7) The user can EXIT the application anytime once a particular function is computed.  
 *(Note: The files to store expenses and counter logs will be automatically created when the application is run and the fuctions concerning them are encountered.)*
 ---
 ## How to RUN ?🔛
 1) Clone this repo.
    * *`git clone https://github.com/tecnolgd/PredictaExpense-cpp.git`*
    * *`cd PredictaExpense`*
      
2) Run with  
    * ### Makefile (Recommended)
        1. Open terminal in the **Predicta** folder. 
        2. Run ***`mingw32-make`***(for windows) / ***`make`***(for linux/ios).
        3. An executabe file called ***predicta.exe*** / ***predicta.o*** would be formed.
        4. Run the command ***`predicta.exe`***(windows) or ***`./predicta`***(linux/ios) in the terminal.  
        *(Note: Run ***`mingw32-make clean`*** or ***`make clean`*** to clear object files based on OS)*
        5. The application will open for user interaction.
        ---

    * ### g++(Manual way)     
        1. Open the terminal in the **Predicta** folder.
        2. Run ***`g++ main.cpp menu.cpp dailyLog.cpp weekLog.cpp history.cpp insights.cpp userBudget.cpp warning.cpp -o predicta`***
        3. An executable file called ***predicta.exe*** would be formed.
        4. Run the command ***`predicta.exe`***(windows) or ***`./predicta`***(linux/ios) in the terminal. (same as Makefile step-d).
        5. The application will open for user interaction.
---
 ## Sample Outputs🖼️
 *(Note: The Output screenshots are based on sample data like BUDGET=12000, Expense for the day 1=450.*    
 *The Weekly log report is generated when the day=7 i.e the log counter sets to 7. Later the log counter resets to 0 for the next week logging.)*
* [Menu BAR](output_img/menu_img.png)    
* [User BUDGET](output_img/Budget.png)
* [Add EXPENSE](output_img/Expense_log.png)
* [WARNINGS](output_img/warnings_3.png)
* [Weekly LOG](output_img/week_log.png)
* [All time LOG History](output_img/All_time_log.png)
* [Insights AND Strategies](output_img/insights_3.png)
* [EXIT](output_img/exit.png)
 ---
 
 ## Future upgrades 🛰️🛰️
 * Date and time stamps for each session of expense logging.
 * More insights like MAX and MIN expense item display.
 * Tailored strategies based on user interests and needs.
 * CLI animation(ncurses or ASCII effects)
 * Flexible budget modification.
 * More user-friendly UI and UX.
 ---
 ### README add-ons ➕   
- [x] Sample screenshots for i/o
- [ ] Application Flowchart
- [ ] Coming soon!
 ---
 ## Value this repo ? ✨
*  If this repository added value to your learning or dev flow ,consider dropping a ⭐or hitting ***fork***.  
* Open for recieving feedback and knowledge exchange.
 ---
 ## Code of Conduct📜
 ### [Contributor Covenant Code of Conduct](https://www.contributor-covenant.org/version/2/1/code_of_conduct/).
 ---
 ### Author     
 ***tecnolgd***

 




