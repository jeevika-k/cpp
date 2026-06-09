#include <iostream>
#include<string>
using namespace std;
class car {
public:
	string brand;
	int engine;

	car() {
		cout << "constructor for car" << endl;              //default constructor with out calling it they will run and print it
	}
};
int main()
{
	car swift;                   //object creation
	swift.brand = "suzuki";
	swift.engine = 1.2;
	cout << swift.brand << endl;
	return 0;
}
/*
CONSTRUCTORS
    -special function one
	-It is caleed when object is created
	-name same as class
	-no return type for constructor

	-Default constructor


	-parameterised constructor



	car(string b,double e){
	    brand=b;
		engine=e;
		cout<<"constructor for car"<<endl;
		}
int main(){
      car swift("suzuki",1.2);
	  cout<<swift.brand<<endl;
	  return 0;
}
o/p ////////////constructor for car
                suzuki



	-copy constructor




	car(string b,double e){
		brand=b;
		engine=e;
		cout<<"constructor for car"<<endl;
		}
int main(){
	  car swift("suzuki",1.2);
	  car copy=swift;
	  cout<<copy.brand<<endl;
	  return 0;
}
o/p ////////////constructor for car             ///////////o/p are also same as parameterised constructor because it is as a copy
				suzuki

*/
/*
DESTRUCTOR
    -special function
	-it is called when object out of scope (it means no use of obj or its ready to delete)
	- (~car) same name as class but we want to denote this (~)


*/

