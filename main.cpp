#include <iostream>
#include <map>
#include <tuple>
#include <string>

using namespace std;

void displayVillagers(const map<string, tuple<int, string, string>>& villagers) {

}


int main() {
    map<string, tuple<int, string, string>> villagers;
    int choice;

    do {
        cout << "1. Add Villager\n"
             << "2. Delete Villager\n"
             << "3. Increase Friendship\n"
             << "4. Decrease Friendship\n"
             << "5. Search for Villager\n"
             << "6. Exit\n"
             << "Enter choice: ";
        cin >> choice;
        cin.ignore();  // Clear the input buffer
switch (choice) {
            case 1: {
                // Add Villager
                string name, species, catchphrase;
                int friendshipLevel;

                cout << "Species: ";
                getline(cin, species);
                cout << "Catchphrase: ";
                getline(cin, catchphrase);

                villagers[name] = make_tuple(friendshipLevel, species, catchphrase);
                cout << name << " added.\n";
                break;
            }
            case 2: {
    return 0;
}
