#include <iostream>
using namespace std;

struct Date{
   int year;
};

struct Auto{
   int wheels;
   float speed;
   char color;
   Date sozdanie;
};

int main(){
   Auto Skoda;
   Skoda.color = 'r';
   Skoda.speed = 315.12;
   Skoda.wheels = 4;
   Skoda.sozdanie.year = 1999;
   Auto Audi = {4,300.23, "b"};

   cout << "Audi speed = "<< Audi.speed << endl;
   cout << "Skoda year = "<< Skoda.sozdanie.year  << endl;
    
}

