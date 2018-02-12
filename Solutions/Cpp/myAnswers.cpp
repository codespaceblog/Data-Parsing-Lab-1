#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;



int main()
{
  ifstream fileData("../../networkdata.csv");
  char buffer[1024];
  std::vector<string> data;
  std::vector<string> answers;



  while (fileData.getline(buffer, 1024))
  {
    data.push_back(buffer);
  }


  for (int i = 0; i < data.size(); i++)
  {
      string line = data.at(i);
      if (i == 1){
        // Question 1
          answers.push_back(data.at(i));
      }
      if (line.size() < 70 && line.size() > 60){
        answers.push_back(data.at(i));
      }
      if (line.find("Koressa") != std::string::npos){
        answers.push_back(data.at(i));
      }
      if (line.find("10.10.16.74") != std::string::npos){
        answers.push_back(data.at(i));
      }
  }

  for (auto i = answers.begin(); i < answers.end(); i++)
  {
    cout << *i << endl;
  }

  cout << "Count: " << data.size() - 2 << endl;
}
