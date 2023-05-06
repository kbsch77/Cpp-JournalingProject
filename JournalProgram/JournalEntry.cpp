#ifndef JOURNALENTRY_CPP
#define JOURNALENTRY_CPP

#pragma once
#endif 

#include <iostream>
#include <ctime>
#include <string>
#include "Prompts.cpp"
using namespace std;

class JournalEntry {
    private:
        Prompts journalPrompts;

        string _dateText;
        string _prompt;
        string _userEntry;

    public:
        void WriteEntry(){
            // Gets the current date and time
            time_t theCurrentTime = time(0);
            _dateText = ctime(&theCurrentTime);

            // Entry prompt
            _prompt = journalPrompts.GiveJournalPrompt();
            cout << _prompt;

            // User's Journal Entry
            cout << ">"; // Shows '>' or entry starting point, but dosen't save it to the entry.
            cin >> _userEntry;
            cout << "\n"; // Blank for spacing
        }

        string GetDateText(){
            return _dateText;
        }
        
        string GetPrompt(){
            return _prompt;
        }

        string GetUserEntry(){
            return _userEntry;
        }
};