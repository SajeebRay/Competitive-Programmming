#include<iostream> 
using namespace std; 
class information
{
  int roll; 
  int number; 
  int mark[100]; 
  double gpa; 
  double result = 0.00; 
  string name; 
  public:
          void input_data(); 
          void execute_information(); 

};
void information :: input_data() 
{
  cout << "Enter Name: "; 
  cin >> name;
  //cout << endl; 
  cout << "Enter Roll: "; 
  cin >> roll;
  //cout << endl; 
  cout << "Number of Subjects: "; 
  cin >> number; 
  //cout << endl; 
  cout << "Enter Subject Mark: "; 
  for(int i = 0; i < number; i++)
      cin >> mark[i];
  cout << endl;

}
void information :: execute_information()
{
  bool if_fail = false;
  for(int i = 0; i < number; i++)
  {
    if(mark[i] >= 80 & mark[i] <= 100)
      result = result + 5.00; 
    else if(mark[i] >= 70 & mark[i] <= 79)
      result = result + 4.00;
    else if(mark[i] >= 60 & mark[i] <= 69)
      result = result + 3.50;
    else if(mark[i] >= 50 & mark[i] <= 59)
      result = result + 3.00;
    else if(mark[i] >= 40 & mark[i] <= 49)
      result = result + 2.00;
    else{
        if_fail = true;
        cout << "Fail" << endl;
      }
    }
gpa = result / number;
  if(if_fail == false)
    cout << "GPA = " << gpa << endl;
}
int main()
{
  information s; 
  s.input_data(); 
  s.execute_information(); 
  return 0; 
}



















































/*#include<iostream>
using namespace std; 
class pattern
{
  int row, col; 
  public: 
          void input_data() ; 
          void execute_pattern() ; 

}; 
void pattern:: input_data()
{
  cout << "Enter row = "; 
  cin >> row; 
  cout << "Enter column = "; 
  cin >> col; 

}
void pattern:: execute_pattern()
{
  for(int i = 0; i < row; i++){
    for(int j = 0; j <= i; j++){
      cout << "* "; 
    }
    cout << endl;
  }

}
int main()
{
  pattern p; 
  p.input_data(); 
  p.execute_pattern(); 
  return 0; 
}*/