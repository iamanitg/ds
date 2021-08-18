#include<iostream>
#include<fstream>
using namespace std;
class student
{
   int roll;
   char name[30];
   float marks;
public:
   student() { }
   void getData();
   void displayData();
};

void student :: getData() {
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cin.ignore();
   cout << "\nEnter Name :: ";
   cin.getline(name, 30);
   cout << "\nEnter Marks :: ";
   cin >> marks;
}

void student :: displayData() {
   cout << "\nRoll No. :: " << roll << endl;
   cout << "\nName :: " << name << endl;
   cout << "\nMarks :: " << marks << endl;
}

int main()
{
   student s[3];
   fstream file;
   int i;
   file.open("E:/C++/Student.txt", ios :: out);
    cout << "\nWriting Student information to the file :- " << endl;
    cout << "\nEnter 3 students Details to the File :- " << endl;

   for (i = 0; i < 3; i++)
    {
      s[i].getData();
      file.write((char *)&s[i], sizeof(s[i]));
    }

   file.close();

   file.open("E:/C++/Student.txt", ios :: in);
   cout << "\nReading Student information from the file :- " << endl;

   for (i = 0; i < 3; i++)
    {
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }
    
   file.close();

   return 0;
}
