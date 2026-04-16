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

            //still in the loop, the program needs to randomly decide to
            // add/remove job, random add/remove housing, and random
            // population growth/decline

            cout << "Updating city: " << cityName << endl;
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

    // temp. data
    cities["SampleCity"][0].push_back("Engineer"); // jobs
    cities["SampleCity"][1].push_back("apartment"); // housing
    cities["SampleCity"][2].push_back("Growth"); // population

    // We need to be able to see what we're starting with
    cout << "Initial:\n";
    for(auto& city : cities) {
        cout << city.first << endl;
    }
    runSimulation(cities, 50);

    return 0;
}






//my eyes burn