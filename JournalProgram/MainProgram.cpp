#ifndef PROMPTS_CPP
#define PROMPTS_CPP

#ifndef JOURNALENTRY_CPP
#define JOURNALENTRY_CPP

#include <iostream>
#include <vector>
#include "Prompts.cpp"
#include "JournalEntry.cpp"
#include "RecordKeeper.cpp"
using namespace std;

int main() {
  // Classes called
  Prompts myPrompts;
  RecordKeeper myRecords;

  // local variables
  string fileName = "";
  int userChoice;
  vector<JournalEntry> entries;

  
  // Runs the Program in a loop untill quit option is selected
  do{
    // Gives and gets user choices
    userChoice = myPrompts.GiveUserOptions();

    if(userChoice == 1){ //Write
      JournalEntry myEntry;
      myEntry.WriteEntry();
      entries.insert(entries.cend(),myEntry);
    }

    else if(userChoice == 2) //Display
      myRecords.DisplayJournal(entries);
    
    else if(userChoice == 3) //Load
      myRecords.LoadJournal();
    
    else if(userChoice == 4) //Save
      fileName =  myRecords.SaveJournal(entries);
    
    else if(userChoice == 5) //Quit
      cout << "Goodbye \n";

    else
      cout << "Please enter a number of 1 through 5.\n";

  } while (userChoice != 5);
}