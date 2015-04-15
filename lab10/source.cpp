#include "rational.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void pause_215(bool have_newline)
{

  if (have_newline) {
    // Ignore the newline after the user's previous input.
    cin.ignore(256, '\n');
  }

  // Prompt for the user to press ENTER, then wait for a newline.
  cout << endl << "Press ENTER to continue." << endl;
  cin.ignore(256, '\n');

}

int main(){
  // create new instance of CLOCK create new instance of CLOCK
  Rational r1();
  r1.setR(33, 33);
  Rational r2();
  r2.setR(180, 240)
  r1.printR();
  r2.printR(); 

  pause_215(true);
  return 0;
}

