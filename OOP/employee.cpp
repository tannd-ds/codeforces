#include <iostream>
using std::string;
using std::cout;

class AbstractEmployee {
	virtual void askForPromotion() = 0;
};

class Employee:AbstractEmployee {
		string company;
		int age;
		float yearExp;

	protected:
		string name;

	public:

		// Construction
		Employee(string name, string company, int age) {
			this->name = name;
			this->company = company;
			this->age = age;
		}

		void introduce() {
			cout << "My name is "    << name    << ",\n";
			cout << "I'm currently " << age     << ",\n";
			cout << "I work for "    << company << ".\n";
		}

		void askForPromotion() {
			if (age > 30)
				cout << name << " got promoted!\n";
			else
				cout << name << ", NO promotion bro...\n";
		}

		virtual void work() {
			cout << name << " is working really hard...\n";
		}

		// Setter
		void setName(string name) {
			 this->name = name;
		}
		void setCompany(string company) {
			this->company = company;
		}
		void setAge(int age) {
			if (age >= 18) this->age = age;
		}

		// Getter
		string getName() {
			return name;
		}
		string getCompany() {
			return company;
		}
		int getAge() {
			return age;
		}
};

class DataScientist : public Employee {
	public:
		string favoriteLanguage;

		DataScientist(string name, string company, int age, string favoriteLanguage)
		:Employee(name, company, age) {
			this->favoriteLanguage = favoriteLanguage;
		}

		void fixBug() {
			cout << name << " is fixing bug using " << favoriteLanguage << "\n";
		}

		void work() {
			cout << name << " is working really hard on Data...\n";
		}

};

class Teacher : public Employee {
	public:
		string subject;
		void prepareLesson() {
			cout << name << " is preparing " << subject << " lesson.\n";
		}

		Teacher(string name, string company, int age, string subject)
		: Employee(name, company, age) {
			this->subject = subject;
		}

		void work() {
			cout << name << " is working really hard on " << subject << "...\n";
		}
};

int main() {

	Employee emp01 = Employee("Minh", "TDTU", 19);
	Employee emp02 = Employee("Luat", "UEH", 20);
	Employee emp03 = Employee("Tuan", "Cong An", 20);
	DataScientist emp04 = DataScientist("Tan", "UIT", 20, "Python");
	Teacher teacher01 = Teacher("Duong", "AGU", 19, "English");

	Employee *e1 = &emp04;

	e1->work();

	emp04.work();
	//teacher01.prepareLesson();
	//teacher01.askForPromotion();
	//emp01.introduce();
	//emp02.introduce();
	//emp03.introduce();
	//emp04.fixBug();

	return 0;
}
