#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#include "ccnv.h"

using namespace std;

void isValid(int &j, vector<string>::iterator &it)
{
  cout << setw(5) << j << " - " << setw(20) << *it << endl;
}

void createVector(vector<string> &v)
{
  v.push_back("371449635398431");
  v.push_back("4444444444444448");
  v.push_back("4444424444444440");
  v.push_back("4110144110144115");
  v.push_back("4114360123456785");
  v.push_back("4061724061724061");
  v.push_back("5500005555555559");
  v.push_back("5115915115915118");
  v.push_back("5555555555555557");
  v.push_back("6011016011016011");
  v.push_back("372449635398431");
  v.push_back("4444544444444448");
  v.push_back("4444434444444440");
  v.push_back("4110145110144115");
  v.push_back("4124360123456785");
  v.push_back("4062724061724061");
  v.push_back("5501005555555559");
  v.push_back("5125915115915118");
  v.push_back("5556555555555557");
  v.push_back("6011116011016011");
  v.push_back("372449635397431");
  v.push_back("4444544444444448");
  v.push_back("4444434444544440");
  v.push_back("4110145110184115");
  v.push_back("4124360123457785");
  v.push_back("4062724061724061");
  v.push_back("5541005555555559");
  v.push_back("5125115115915118");
  v.push_back("5556551555555557");
  v.push_back("6011316011016011");
}

int main(void)
{
  int i = 0;
  vector<string> cc;
  vector<string>::iterator iterator;

  createVector(cc);

  for (i = 1, iterator = cc.begin(); iterator != cc.end(); ++iterator, i++)
  {
    isValid(i, iterator);
  }

  return 0;
}