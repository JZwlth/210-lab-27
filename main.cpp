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

        cin >> choice;
        cin.ignore();  // Clear the input buffer

    };
    return 0;
}
