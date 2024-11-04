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
                // Delete Villager
                string name;
                cout << "Enter villager name to delete: ";
                getline(cin, name);

                if (villagers.erase(name)) {
                    cout << name << " deleted.\n";
                } else {
                    cout << name << " not found.\n";
                }
                break;
            }
            case 3: {
                // Increase Friendship
                string name;
                cout << "Enter villager name to increase friendship: ";
                getline(cin, name);

                auto it = villagers.find(name);
                if (it != villagers.end()) {
                    int& level = get<0>(it->second);
                    if (level < 10) {
                        level++;
                        cout << "Friendship level increased to " << level << ".\n";
                    } else {
                        cout << "Friendship level is already at maximum.\n";
                    }
                } else {
                    cout << name << " not found.\n";
                }
                break;
            }
            case 4: {
                // Decrease Friendship
                string name;
                cout << "Enter villager name to decrease friendship: ";
                getline(cin, name);

                auto it = villagers.find(name);
                if (it != villagers.end()) {
                    int& level = get<0>(it->second);
                    if (level > 0) {
                        level--;
                        cout << "Friendship level decreased to " << level << ".\n";
                    } else {
                        cout << "Friendship level is already at minimum.\n";
                    }
                } else {
                    cout << name << " not found.\n";
                }
                break;
            }
    return 0;
}
