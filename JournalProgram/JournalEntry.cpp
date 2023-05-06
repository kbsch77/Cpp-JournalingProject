#include <iostream>
#include <ctime>
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
};