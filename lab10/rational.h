#ifndef RATIONAL_H 
#define RATIONAL_H 

/*
//This was the class we used last class, I inserted it for refrence. 
class Clock
{ 
  public:
    Clock(); // default constructor
    Clock(int hh, int mm, int ss); //constructor
    
    //increase time by sec seconds
    void incrementSeconds(int sec);

    //increase time by min minutes
    void incrementMinutes(int min);
       
    //increase time by hh hours,
    //if hours reach 24, simply wrap around to 0.
    void incrementHours(int hh);
    
    void addTime(Clock C); //add C into the clock
       
    //print time in hours:minutes:seconds am(or pm) format
    void printTime();

  private:
    // Declare data members of the class
    // 0 <= hours < 24, 0 <= minutes < 60, 0 <= seconds < 60
    int hours, minutes, seconds;

};

*/
class Rational
{
  public:
    Rational(); //default constructor
    Rational(int nm, int dn); //constructor

    void printR();
    //Prints the rational in the simplist form.

    void setR(int nm, int dn);
    //Take values and shove them into the clas object.

    void addR(Rational C);
    //take one rational object and add another to it.

    void subR(Rational C);
    //take one rational object and subtract another from it.
    
    void mulR(Rational C);
    //take one rational object and multiply it with another object.

    void divR(Rational C);
    //take one rational object and divide it with another object.

  private:
    //Declare data members of the class.
    //num and den are the two data members we use.
    int num, den;

};

#endif;
