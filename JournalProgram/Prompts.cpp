#ifndef PROMPTS_CPP
#define PROMPTS_CPP

#pragma once
#endif  

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Prompts {
  private:
    //Journal Entry Prompts
    vector<string> _prompts
    {
        "Who was the most interesting person I interacted with today?",
        "What was the best part of my day?",
        "How did I see the hand of the Lord in my life today?",
        "What was the strongest emotion I felt today?",
        "If I had one thing I could do over today, what would it be?"
    };

    public:
     string GiveJournalPrompt(){
        // random number of 0 through 4
        int randomInt = (rand() % 4);
        
        // retrieves and returns a random prompt from the prompt vector
        string prompt = _prompts[randomInt];
        return prompt;
    }

     int GiveUserOptions(){
        //Menu prompts
        cout << "Plese Select one of the following choices:\n";
        cout << "1. Write\n";
        cout << "2. Display\n";
        cout << "3. Load\n";
        cout << "4. Save\n";
        cout << "5. Quit\n";
        cout << "What would you like to do? ";

        //meathod variables
        bool validity = false;
        int userEntry;

        //Loop to ensure validity of menu prompt choice
        while(validity == false){
            cin >> userEntry;

            //Only allows users to enter in a number between 1-5
            if (userEntry == 1 || userEntry == 2|| userEntry == 3|| userEntry == 4|| userEntry == 5){
                validity = true;
            }
            else cout << "Please enter a number of 1 through 5.\n";
        }
        
        return userEntry;
    }
};