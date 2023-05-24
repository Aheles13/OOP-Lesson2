#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Person
{
public:
	std::string _name;
	int _age;

public:
	void print(std::string name, int age)
	{
		_name = name;
		_age = age;
	};
	void showAll(std::string name, int age)
	{
		std::cout << "Name: " << name << "\n";
		std::cout << "Age: " << age << "\n";
	}
	void getName(std::string name)
	{
		_name = name;
	}
	void getName(int age)
	{
		_age = age;
	}
};

class Pupil
{
public:
	std::string _name;
	int _age;
	std::vector <int> _marks ;

public:
	void print1(std::string name, int age, std::vector <int> marks)
	{
		_name = name;
		_age = age;
		_marks = marks;

	}
	void showAll1(std::string name, int age, std::vector <int> _marks)
	{
		std::cout << "Name: " << name << "\n";
		std::cout << "Age: " << age << "\n";
		std::cout << "Marks: " << "\n";
		std::vector <int> vec = { 5,2,3 };
		for(int i = 0; i < vec.size(); ++ i)
		{
			std::cout << vec.at(i) << " ";
		}
		std::cout << std::endl;
	}

	void getName1(std::string name )
	{
		_name = name;
	}
	void getAge1(int age)
	{
		_age = age;
	}
	void getMarks1(std::vector <int> marks)
	{
		_marks = marks;
	}
};

class Professor
{
public:
	std::string _name;
	std::string _degree;
	
	
public:
	void print2(std::string name, std::string degree) 
	{
		_name = name;
		_degree = degree;

	}
	void showAll2(std::string name, std::string degree)
	{
		std::cout << "Name: " << name << "\n";
		std::cout << "Degree: " << degree << "\n";
	
	}
	void getName2(std::string name )
	{
		_name = name;
	}
	void getAge2(std::string degree)
	{
		_degree = degree;
	}
};

class Client 
{
private:
	std::string _name;
	int _age;
	double _bill;
public:
	Client(std::string name, int age, double bill)
	{
		_name = name;
		_age = age;
		_bill = bill;
	}

	void ShowData()
	{
		std::cout << "Name's client: " << _name << "\n";
		std::cout << "Age's client: "  << _age << "\n";
		std::cout << "Bill's client: " << _bill << "\n";

	}

};



class Bank 
{
private:
	std::vector <Client*> _clients;
public:
	void AddClient(Client* client)
	{
		_clients.push_back(client);
	
	}
	void ShowClients()
	{
		for (const auto& it : _clients)
			it->ShowData();
	}
	void ShowClient(int index)
	{
		if (index > _clients.size())
			return;
		_clients.at(index -1)->ShowData();
	}


};



int main() {
	setlocale(LC_ALL, "Ru");

		//////Person people;
		//////people.showAll("Nik", 30);
		//////std::vector <int> GG = {  };
		//////Pupil pupil;
		//////pupil.showAll1("Neyt", 25, GG);
		//////Professor professor;
		//////professor.showAll2("Bob", "Doktor");

	Bank* bank = new Bank();
	Client *client1 = new Client("Bob", 20, 45646546);
	Client *client2 = new Client("Jon", 22, 78976);
	Client *client3 = new Client("Mary", 23, 2313216);
	Client *client4 = new Client("Bill", 25, 65454);
	Client *client5 = new Client("Rony", 39, 1111868);
	bank->AddClient(client1);
	bank->AddClient(client2);
	bank->AddClient(client3);
	bank->AddClient(client4);
	bank->AddClient(client5);
	bank->ShowClients();
	bank->ShowClient(2);
	



	return 0;
}

