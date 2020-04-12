#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string input, country;
    getline(cin, input);
    int itr = stoi(input);
    map <string, int> countries;

    for (int i = 0; i<itr; i++)
    {
        getline(cin, input);
        stringstream l (input);
        getline(l, country, ' ');
        countries[country]++;
    }

    for (auto element: countries)
    {
        cout <<element.first<<" "<<element.second<<endl;
    }
 }

