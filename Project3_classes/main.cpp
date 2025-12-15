#include <iostream>
#include "irr_number.hpp"
#include <cmath>

namespace Labs
{
	double ComplexNumber::re() const {
		return re_;
	}

	double ComplexNumber::im() const {
		return im_;
	}

	double ComplexNumber::abs() const {
		return std::sqrt(im_ * im_ + re_ * re_);
	}

	ComplexNumber ComplexNumber::pow(unsigned n) const {
		if (n == 0)
			return { 1, 0 };
		if (n == 1)
			return { re_, im_ };
		return *this * pow(n - 1);
	}

	ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
		return ComplexNumber(re_ + other.re(), im_ + other.im());
	}

	ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
		return ComplexNumber(re_ - other.re(), im_ - other.im());
	}

	ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
		return ComplexNumber(
			re_ * other.re() - other.im() * im_,
			re_ * other.im() + other.re() * im_
		);
	}

	ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const {
		return ComplexNumber(
			(re_ * other.re() + other.im() * im_) / (other.im() * other.im() + other.re() * other.re()),
			(im_ * other.re() - other.im() * re_) / (other.im() * other.im() + other.re() * other.re())
		);
	}

	std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn) {
		if (cn.im() < 0) {
			os << cn.re() << " " << cn.im() << "i";
			return os;
		}
		else {
			os << cn.re() << " + " << cn.im() << "i";
		}
		return os;
	}

	double Vector::x() const {
		return x_;
	}

	double Vector::y() const {
		return y_;
	}

	double Vector::z() const {
		return z_;
	}

	double Vector::length() const {
		return std::sqrt(x_ * x_ + y_ * y_ + z_ * z_);
	}

	Vector Vector::operator+(const Vector& other) const {
		return Vector(
			x_ + other.x(), y_ + other.y(), z_ + other.z()
		);
	}

	Vector Vector::operator-(const Vector& other) const {
		return Vector(
			x_ - other.x(), y_ - other.y(), z_ - other.z()
		);
	}

	double Vector::operator*(const Vector& other) const {
		return (
			x_ * other.x()+ y_ * other.y() + z_ * other.z()
		);
	}

	void Vector::print_vector() const {
		std::cout << "(" << x_ << ", " << y_ << ", " << z_ << ")";
	}

	void Vector::print_lenght() const {
		std::cout << Vector::length();
	}
	void Vector::print_prod(const Vector& other) const {
		std::cout << (*this * other);
	}
}

int main() {
	// auto r1 = Labs::ComplexNumber();
	// auto r2 = Labs::ComplexNumber(2, 3);
	// auto res = r1 / r2;
	// auto vec1 = Labs::Vector(1, 1, 1);
	// auto vec2 = Labs::Vector(1, 2, 3);
	// auto res_vec = vec1 + vec2;
	// res_vec.print_vector();
	//std::cout << res_vec;

	auto vk = Labs::Company(50);
    
    vk.create_director(
        "Владимир",
        "Кириенко",
        1,
        15
    );
    
    vk.create_Employee(
        "Елена",
        "Иванова",
        2,
        8
    );
    
    vk.create_Employee(
        "Виктор",
        "Кузнецов",
        3,
        6
    );

	// vk.setProfit(145.12);
	// auto director = vk.director();
    // std::cout << "После первой выплаты: " 
    //           << (director->checkPromises() ? "true" : "false") << std::endl;
}