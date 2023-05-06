#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "JournalEntry.cpp"
using namespace std;

class RecordKeeper {
  private:
    string _loadedLines[NULL];

 public:
    string SaveJournal(vector<JournalEntry> entries){
    string fileName;
    cout << "Enter the name of your journal: "; 
    cin >> fileName;
        
    ofstream myJournal;
    myJournal.open(fileName + ".txt");
        
        for (JournalEntry entry : entries){ 
            // Entry date
            myJournal << "Date: " + entry.GetDateText() + " - ";

            // Entry prompt
            myJournal << "Prompt: " + entry.GetPrompt() + "\n";

            // User's Journal Entry
            myJournal << entry.GetUserEntry() + "\n\n";
        } 
        myJournal.close();
        
        return fileName;
    }

     void LoadJournal(){
        cout << "(Work In Progress) \n";
        cout << "Enter the name of your journal you want to load: ";
        string fileName;
        cin >> fileName;

        ofstream myJournal;
        myJournal.open(fileName + ".txt", ios::in);

        for(int i = 0; i < 100; i++)
			myJournal << _loadedLines[i];

        for(int i = 0; i < 100; i++){
			int j = i + 1;
			cout << j << ": " << _loadedLines[i] << endl;
		}
        myJournal.close();
    }

     void DisplayJournal(vector<JournalEntry> entries){
        if(_loadedLines != NULL){
            for (string line : _loadedLines)
            {
                cout << line + "\n";
            }
        }
        for (JournalEntry entry : entries){
        // Entry date
        cout << "Date: " + entry.GetDateText() + " - ";

        // Entry prompt
        cout << "Prompt: " + entry.GetPrompt() +"\n";

        // User's Journal Entry
        cout << entry.GetUserEntry() + "\n\n";
        }
    } 

};