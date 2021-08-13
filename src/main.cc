#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "ccnv.h"

using namespace std;

/* add two digits to get a single digit number. */
int addTwoDigits(int digit)
//int addTwoDigits(const int &digit_one, const int &digit_two)
{
  /*
  1. double the value of digit
  2. return the sum of the parsed doubled digit ((10) == digit-1, digit-0) 
  */
  /*
    extract the first and second digit. 
    add first and second
    return sum
  */

  return (digit * 2);
}

void doubleSecondDigit(int i, vector<string> &v)
{
  vector<string>::iterator it = v.begin();
  while (it != v.end())
  {
    cout << "(" << it[0][0] << ")" << endl;
    it++;
  }

  /* stopped here*/
  /*
  int v.data = 0;

  if (second_digit >= 5)
  {
    single_digit = addTwoDigits(second_digit);
  }
  else
  {
    single_digit = (second_digit * 2);
  }
  */
}

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

  /* dangling pointer example */
  int *a = new int();
  int *b;

  b = a;

  delete a;
  a = nullptr;
  /* end */

  createVector(cc);

  for (i = 1, iterator = cc.begin(); iterator != cc.end(); ++iterator, i++)
  {
    isValid(i, iterator);
  }
  doubleSecondDigit(i, cc);

  cout << cc.size() << endl;

  return 0;
}

/* 
  1.Double every second digit from right to left. 
  2.If doubling of a digit results in a two digits, add the two digits to get a single digit number.

  vector is a sequential container, objects are placed into the container LIFO  
*/