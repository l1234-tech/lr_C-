#ifndef IRR_NUMBER_HPP
#define IRR_NUMBER_HPP
#include <cmath>
#include <vector>

namespace Labs
{
	class ComplexNumber {
	private:
		double re_{};
		double im_{};
	public:
		ComplexNumber(double re = 0, double im = 0) : re_(re), im_(im) {}

		double re() const;
		double im() const;
		double abs() const;
		ComplexNumber pow(unsigned pow) const;

		ComplexNumber operator* (const ComplexNumber& other) const;

		ComplexNumber operator+(const ComplexNumber& other) const;

		ComplexNumber operator-(const ComplexNumber& other) const;

		ComplexNumber operator/(const ComplexNumber& other) const;
	};

	class Polynom : std::vector<ComplexNumber> {
	public:
		ComplexNumber at(const ComplexNumber& x) const;


	};

	class Vector {
	private:
		double x_{};
		double y_{};
		double z_{};
	public:
		Vector(double x = 0, double y = 0, double z = 0) : x_(x), y_(y), z_(z) {}
		double x() const;
		double y() const;
		double z() const;
		double length() const;

		Vector operator+(const Vector& other) const;
		Vector operator-(const Vector& other) const;
		double operator*(const Vector& other) const;
		//скалярное произведение 

		void print_vector() const;

		void print_lenght() const;

		void print_prod (const Vector& other) const;
	};

	// далее я реализую класс из 15 задания

	class Promise{
	private:
		int id;
		double salary;
		bool isPaid_salary;
	public:
		Promise (int user_id, double user_salary) : id(user_id) , salary(user_salary), isPaid_salary(false){}

		int getID() const {return id; }
		double get_salary() const {return salary;}
		bool getIsPaid() const {return isPaid_salary;}

		void give_salary_to_user() {isPaid_salary = true;}
		void reset_salary_to_user() {isPaid_salary = false;}
	};
	

	class Employee {
	protected:
		std::string first_name;
		std::string second_name;
		int id;
		std::shared_ptr<Promise> promise;
	public:
		Employee(const std::string& first, const std::string& second, int userID, double salary)
		: first_name(first) , second_name(second) , id(userID) {
			promise = std::make_shared<Promise>(userID, salary);
		}
		std::string get_first_name() const {return first_name;}
		std::string get_second_name() const {return second_name;}

		int get_id() const {return id;}
		bool chackPromises() const {
			return promise -> getIsPaid();
		}
	};
	class Director : public Labs::Employee{
	public:
		Director (const std::string& first, const std::string& second, int id, double salary) 
		: Labs::Employee(first, second , id, salary){}
	};

	class Company {
	private:
		double balance;
		std::shared_ptr<Labs::Director>Director_of_Company;
		std::vector<std::shared_ptr<Labs::Employee>> employees;
	public:
		Company(double all_balance = 0) : balance(all_balance){}

		void create_director(const std::string& first, const std::string& second, int id, double salary) {
			Director_of_Company = std::make_shared<Labs::Director>(first, second, id, salary);
		}

		void create_Employee(const std::string& first, const std::string& second, int id, double salary){
			employees.push_back(std::make_shared<Labs::Employee>(first, second, id, salary));
		}
		void setProfit(double profit){
			balance += profit;
		}

		std::shared_ptr<Labs::Director> director() const{
			return Director_of_Company;
		}

		double getBalance() const {
        	return balance;
    	}
	}; 
};


#endif
