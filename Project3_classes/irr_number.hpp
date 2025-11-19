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
}


#endif
