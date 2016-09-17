#include <iostream>
using namespace std;

struct Name{
   char lastName[30];
   char firstName[30];
};

struct Student{
   int id;
   Name name;
   double grade[3];       
};

void newLine();

int main(){
    Student stud;
   	float sum, ave;
		cout << "Enter student records: \n";
		cout << "ID: ";
			cin >> stud.id;
	newLine();
		cout << "First Name: ";
			cin.getline(stud.name.firstName, 29);
		cout << "Last Name: ";
			cin.getline(stud.name.lastName, 29);
    for(int i=1; i<4; i++){
        cout << "Quiz "<< i << ": ";
        	cin >> stud.grade[i];        
    }
    
    cout << "\n\n";
    cout << "Student records:\n";
    cout << "ID: " << stud.id << endl;
    cout << "Student Name: " << stud.name.firstName << " " << stud.name.lastName << endl;
    
    for(int i=1; i<4; i++){
		sum+=stud.grade[i];
    }
		ave= sum/3;
		cout << "Grade "<< ": " << ave << endl;  
    
    if (ave>74){
    	cout<<"Remark: Passed"<<endl;
	}
	else{
		cout<<"Remark: Failed"<<endl;
	}
    
    
    system("pause > 0");
    return 0;   
}
void newLine(){
    char s;
    do{cin.get(s);}while(s!='\n');     
}
