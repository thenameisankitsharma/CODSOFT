#include<iostream>
using namespace std;
class calculator
{
public:
  int x;
  int y;
  friend class Maths;
};
class Maths
{
public:
  int choice;
  void show (calculator & o)
  {
        add:

      cout<<"*********CALCULATOR**********"<<endl;
    cout << "For addition press 1"<<endl;
    cout << "For subtraction press 2"<<endl;
    cout << "For multiplication press 3"<<endl;
    cout << "For division press 4"<<endl;
        cout << "For square press 5"<<endl;

    
    cin >> choice;

    switch (choice)
      {
      case 1:
	cout << "Enter two no. for addition"<<endl; 
	cin >> o.x >> o.y;
		cout << "Your addition is: " << o.x + o.y << endl;

	break;
	
	case 2:cout << "Enter two No. for subtraction"<<endl;
	cin >> o.x >> o.y;
		cout << "Your subtraction  is: " << o.x - o.y << endl;

	break;
	case 3:cout << "Enter two no. for multiplication"<<endl;
	cin >> o.x >> o.y;
		cout << "Your multiplication is: " << o.x * o.y << endl;

	break;
	
	case 4:cout << "Enter two no. for division"<<endl;
	cin >> o.x >> o.y;
		cout << "Your division is: " << o.x / o.y << endl;
		
		case 5:
		cout << "Enter no. for square"<<endl;
	cin >> o.x;
		cout << "Your square is: " << o.x*o.x << endl;

	break;
	default:
	cout<< "Please choose form the above numbers only"<<endl;

      }	goto add;

      }
  };
  int main ()
  {
    calculator obj1;
    Maths obj2;
    obj2.show (obj1);
    return 0;
  }












