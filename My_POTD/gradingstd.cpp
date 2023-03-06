#include <bits/stdc++.h>
#define el endl;
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
         int size{0};
         size=grades.size();
         for (int i = 0; i < size; i++)
         {
          if(grades.at(i)>=38 and (5 - grades.at(i)%5)<3){
            grades[i]+= (5 - grades.at(i)%5);
          }
          
         }
         return grades;
}