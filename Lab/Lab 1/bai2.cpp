#include <iostream>
#include <cstring>

using namespace std;

struct Student{
	char name[30];
	char Class[10];
	float mMath;
	float mPhysical;
};

void addNewStudent(Student* &students, int& numStudent){
	numStudent++;
	
	Student *newStudent = new Student[numStudent];
	
	if(students != NULL){
		memcpy(newStudent, students, (numStudent - 1) * sizeof(numStudent));
		delete[] students;
	}	
	
	cout<<"name: "; 		cin>>newStudent[numStudent - 1].name;
	cout<<"class: "; 		cin>>newStudent[numStudent - 1].Class;
	cout<<"mMath: ";		cin>>newStudent[numStudent - 1].mMath;
	cout<<"mPhysical: ";	cin>>newStudent[numStudent - 1].mPhysical;
	cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
	students = newStudent;
}

void searchByName(const Student* students, int numStudent, const char* name){
	bool found = false;
	for(int i = 0; i < numStudent; i++){
		if(strcmp(students[i].name, name) == 0){
			cout<<"Find!" <<endl;
			cout<<"     name: " <<students[i].name <<endl;
			cout<<"     class: " <<students[i].Class <<endl;
			cout<<"     mMath: " <<students[i].mMath <<endl;
			cout<<"     mPhysical: " <<students[i].mPhysical <<endl; 
			cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
			found = true;
			break;
		}	
	}
	if(found = false){
		cout<<"not found! \n";
	}
}

void searchByNameAndEditClass( Student* students, int numStudent, const char* name, char* newClass){
	for(int i = 0; i < numStudent; i++){
		if(strcmp(students[i].name, name) == 0){
			strcpy(students[i].Class, newClass);
			cout<<"successful. \n";
			cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
			return;
		}	
	}
	cout<<"not found student! \n";
	cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
}

int main(){
	Student *students = NULL;
	int numStudent = 0;
	char choice;
	
	do {
		cout<<"     MENU: "<<"\n";
		cout<<"1. Add new a student.\n";
		cout<<"2. Search student by name.\n";
		cout<<"3 Search student by name and edit class of the student.\n";
		cout<<"4. Exit. \n";
		cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch (choice){
			case '1' :
				addNewStudent(students, numStudent);
				break;
			case '2' :
				char searchName[30];
				cout<<"enter name: "; cin>>searchName;
				searchByName(students, numStudent, searchName);
				break;
			case '3' :
				char searchName2[30];
				cout<<"enter name: "; cin>>searchName2;
				char newClass[10];
				cout<<"enter new Class: "; cin>>newClass;
				searchByNameAndEditClass(students, numStudent, searchName2, newClass);
				break;
			case '4' :
				cout<<"Exit!";
				delete[] students;
				return 0;
			default:
				cout<<"Invalid choice! \n";
				cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
		}
	}while(choice != 4);
	
	return 0;	
}









