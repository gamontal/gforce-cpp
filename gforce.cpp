/*

Newton's Law of Universal Gravitation - C++ Implementation

Every point mass attracts every single other point mass by a force pointing along the line intersecting both points.
The force is proportional to the product of the two masses and inversely proportional 
to the square of the distance between them: F = G ((m1*m2)/(r^2))
 
F = gravitational force 
m1 = primary mass
m2 = secondary mass
r = distance
G = Newtonian gravitational constant (6.67 x 10^-11 m^3/(kg s^2))

*/

#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

double G = 0.000000000066742; // gravitational constant


bool FailCheck() {

  HANDLE hstdin  = GetStdHandle( STD_INPUT_HANDLE  );
  HANDLE hstdout = GetStdHandle( STD_OUTPUT_HANDLE );

    if (cin.fail()) { 
   SetConsoleTextAttribute( hstdout, 0x0C );
    cout<<"\nInvalid entry. Please try again."<<endl; exit(1); } 
    } 

class GravitationalEq {

public:
 
void find_value(double m1, double m2, double r) { //m1 = primary mass; m2 = secondary mass; r = distance

    double F, RS;
    RS = pow(r, 2);

    F = (G*m1*m2)/(RS);

    cout<<showpoint<<setprecision(10)<<"\n\n\n";

    cout<<"RESULTS:"<<endl;

    cout<<"Mass of the 1st object is: "<<m1<<" kg"<<endl;
    
    cout<<"Mass of the 2nd object is: "<<m1<<" kg"<<endl;

    cout<<"Distance is: "<<r<<endl;

    cout<<"The Gravitational Constant is: "<<G<<" Nm^2/kg^2"<<endl;

    cout<<"\nThe Gravitational Force is: "<<F<<"[N]"<<endl;

    }
  
};

int main() {

  GravitationalEq gforce;

  double m1, m2, r;
 
  cout<<"\n//Computation of gravitational force between two objects// "<<endl;

  cout<<" \n\nEnter the mass of the first object (in kg): ";
  cin>>m1; FailCheck();

  cout<<" \nEnter the mass of the second object (in kg): ";
  cin>>m2; FailCheck();

  cout<<"\nEnter the distance between the centers of the two objects (in meters): ";
  cin>>r; FailCheck();

  gforce.find_value(m1, m2, r);

}







