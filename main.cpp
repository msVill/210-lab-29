// Necessary libraries
#include <iostream>
#include <map>
#include <array>
#include <list>
#include <fstream>
#include <string>

using namespace std;

//Function to simulate city changes over time:
void runSimulation(map<string, array<list<string>, 3>>& cities, int timePeriods) {
    // In the function, I want to loop through each time period
    for(int t = 1; t <= timePeriods; t++) {
        // what year would it be when the loop runs? need to display
        cout<<"Year " << t << " \n";

        for(auto& city : cities) {
            string cityName = city.first;

            // I want to access the 3 lists:
            auto& jobs = city.second[0];
            auto& housing = city.second[1];
            auto& population = city.second[2];
        }


    }

}


//Loop through each city:

int main() {

    //Map needs to be declared here
    map<string, array<list<string>, 3>> cities;

    //I want to open the file in main
    ifstream file("data.txt"); // I still need to create the file
    // and then check if it exist/can be found/open
    if(!file) {
        cout << "File Not Found.";
        return 1;
    }

    //I want the program to read each line from file
    // parse city, category, value
    // insert into correct list in map

    runSimulation(cities, 50);

    return 0;
}