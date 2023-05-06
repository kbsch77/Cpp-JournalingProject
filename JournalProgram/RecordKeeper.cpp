#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include "JournalEntry.cpp"
using namespace std;

class RecordKeeper {
  private:
    string _loadedLines[NULL];
    JournalEntry entry;
    string line;

 public:
    string SaveJournal(vector<JournalEntry> entries){
    string fileName;
    cout << "Enter the name of your journal: "; 
    cin >> fileName;
        
    ofstream myJournal;
    myJournal.open(fileName + ".txt", ios::in);
        
        foreach (entry : entries){ 
            // Entry date
            myJournal << "Date: " entry._dateText " - ";

            // Entry prompt
            myJournal << "Prompt: " entry._prompt "\n";

            // User's Journal Entry
            myJournal << entry._userEntry "\n\n";
        } 
        myfile.close();
        
        return fileName;
    }

     void LoadJournal(){
        cout << "Enter the name of your journal you want to load: ";
        string fileName;
        cin >> fileName;

        ofstream myJournal;
        myJournal.open(fileName + ".txt");
        while(!myJournal.eof)
            getline(myJournal, _loadedLines);
    }

     void DisplayJournal(vector<JournalEntry> entries){
            if(_loadedLines != NULL){
                foreach (line : _loadedLines)
                {
                    cout << line "\n";
                }
            }
            foreach (entry : entries){
            // Entry date
            cout << "Date: " entry._dateText " - ";

            // Entry prompt
            cout << "Prompt: " entry._prompt "\n";

            // User's Journal Entry
            cout << entry._userEntry "\n\n";
        }
    } 
}