#pragma once
#include <iostream>
using namespace std;

class HasConsoleOperations {
	virtual void ConsoleWrite() = 0;
	virtual void ConsoleRead() = 0;
};

class Persoana:HasConsoleOperations {
protected:
	char name[20];
public:
	Persoana(const char nameParam[]) {
		strcpy_s(name, nameParam);
	}
	Persoana() {
		strcpy_s(name, "Generica");
	}

	virtual void ConsoleWrite() {
		cout << "Persoana: " << name << endl;
	}

	virtual void ConsoleRead() { 
		// de facut
	}
};

class Profesor :public Persoana {
	char subject[20];
public:
	Profesor(const char nameParam[], const char subjectParam[]) : Persoana(nameParam) {	
		strcpy_s(subject, subjectParam);
	}
	Profesor() {
		strcpy_s(name, "Profu Generic");
		strcpy_s(subject, "C++");
	}
	void ConsoleWrite() {
		cout << "Profesorul: " << name << "  Materia:" << subject << endl;
	}
};

class Elev : public Persoana {
private:
	char school[20];
public:
	Elev() {
		strcpy_s(name, "Elevu Generic");
		strcpy_s(school, "Bacovia Skull");
	}
	Elev(const char nameParam[], const char schoolParam[]) : Persoana(nameParam) {
		strcpy_s(school, schoolParam);
	}

	void ConsoleWrite() {
		cout << "Elevul: " << name << "  Scoala:" << school << endl;
	}
};

class Student: public Persoana {

	int grupa;
	int grade;

public:
	Student(const char nameParam[], int gradeParam, int grupaParam) : Persoana(nameParam) {
		SetGrade(gradeParam);
		grupa = grupaParam;
	}
	Student() {
		strcpy_s(name, "Student Generic");
		grade = 5;
		grupa = 211;
	}

	void ConsoleRead() {
		cin >> name >> grade >> grupa;
	}
	void ConsoleWrite() {
		cout << "Student: " << name << " - " << grade << "  grupa: " << grupa << endl;
	}

	void SetGrade(int gradeParam) {
		if (gradeParam >= 1 && gradeParam <= 10) {
			grade = gradeParam;
		}
		else {
			cout << "\nBUBA\n";
			grade = 0; // rutina de tratare a erorii
		}
	}
};
