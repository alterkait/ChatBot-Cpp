  #include <iostream>
  #include <cstdlib>
  #include <fstream>
  #include <algorithm>
  
  using namespace std;
  int main()
  {
    string name;
    cout << "Hello, what is your name?\n" << endl;
    cin >> name;
    
    int BirthYear;
    cout << "Hi, " << name << " when were you born?" << endl;
    cin >> BirthYear;
    
    int ThisYear, Age;
    ThisYear = 2017;
    Age = ThisYear - BirthYear;
    cout << "So you are " << Age << " years old.." << endl;
      
    
    
    return 0;
  }
