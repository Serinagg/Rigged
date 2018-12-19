#include <iostream>
#include <string>
#include <vector>
#include "Rigged.h"

using namespace std;
void Rigged::enterName(string &name)
{
  nombre = name;
  people.push_back(nombre);
}

string Rigged::winner()
{
 int last = people.size() - 1;
  return people[last];
}
