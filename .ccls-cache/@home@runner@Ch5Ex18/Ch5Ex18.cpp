/* File Name: Ch5Ex18.cpp
  Programmer: Katlyn Winkelhake
  Date: Nov 9 2024
  Requirements:
  Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest, at 20-year intervals during the past 100 years. The program should read in the population figures (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. For each year, it should display the date and a bar consisting of one asterisk for each 1,000 people. The data can be found in the People.txt file.
*/

// this was a horrid program. I cried.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


string populationString;

const double years[6] = {1900, 1920, 1940, 1960, 1980, 2000};
int n = sizeof(years) / sizeof(years[0]);


void File();
void BarChart();


int main(){

  File();
  
}

void File(){

fstream fileHandle;
  cout <<  "PRAIRIEVILLE POPULATION GROWTH" << endl
     << "(each * represents 1,000 people)" <<endl;

  fileHandle.open("People.txt");

  if (fileHandle.fail()){
    cout << "Couldn't find file." << endl;
  abort();
  }
 
  for (int i = 0; i < 6; ++i) {
    fileHandle >> populationString;
    double population = stod(populationString);
    cout << years[i] << "\t"
         << "\t\t";
   
    for (int j = 0; j < population / 1000; ++j) {
        cout << "*";
    }
    cout << endl; 
  }
 
  
  fileHandle.close();

}
