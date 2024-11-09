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



void File();



int main(){

  File();
  
}

void File(){

fstream fileHandle;
  cout <<  "PRAIRIEVILLE POPULATION GROWTH" << endl
     << "(each * represents 1,000 people)" <<endl
    << "Year\tPopulation" << endl;


  fileHandle.open("People.txt");

  if (fileHandle.fail()){
    cout << "Couldn't find file." << endl;
  abort();
  }
 
  for (int a = 0; a < 6; ++a) {
    fileHandle >> populationString;
    double population = stod(populationString);
    cout << years[a] << "\t";
        
   
    for (int b = 0; b < population / 1000; ++b) {
        cout << "*";
    }
    cout << endl; 
  }
 
  
  fileHandle.close();

}
