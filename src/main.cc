#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "ccnv.h"

using namespace std;

/* add two digits to get a single digit number. */
int addTwoDigits(vector<string>::iterator &itr)
//int addTwoDigits(const int &digit_one, const int &digit_two)
{
  cout << "I'm going to double this digit: " << *itr << endl;
  /*
  1. double the value of digit
  2. return the sum of the parsed doubled digit ((10) == digit-1, digit-0) 
  */
  /*
    extract the first and second digit. 
    add first and second
    return sum
  */

  return 1;
}

void doubleEveryOtherDigit(int i, vector<string> &v)
{
  int index = 0;
  int count = 0;
  int single_digit = 0;
  vector<string>::iterator it = v.begin();
  while (it != v.end())
  {
    if ((count % 2) == 0)
    {
      /* this doesn't work, can't compare an iterator object to an iterger*/
      if (it[0][1] >= 5)
      {
        cout << "Item: " << count << " Second Digit: "
             << "(" << it[0][1] << ") " << *it << endl;
        //single_digit = addTwoDigits(it[0][1]);
      }
      else
      {
        single_digit = (it[0][1] * 2);
        cout << "single_digit: " << it[0][1] << endl;
      }
    }
    count++;
    it++;
  }
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

  createVector(cc);

  for (i = 1, iterator = cc.begin(); iterator != cc.end(); ++iterator, i++)
  {
    isValid(i, iterator);
  }

  doubleEveryOtherDigit(i, cc);

  return 0;
}

/* 
  1.Double every second digit from right to left. 
  2.If doubling of a digit results in a two digits, add the two digits to get a single digit number.

  vector is a sequential container, objects are placed into the container LIFO  
*/