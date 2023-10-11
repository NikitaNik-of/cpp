#include <iostream>
#include <math.h>
using namespace std;

static string err = "\033[31m[ X ] \033[0m";
static string warn = "\033[33m[ ! ] \033[0m";
static string ok = "\033[32m[ OK ] \033[0m";

class Vector2D
{
	public:
		Vector2D(double x, double  y)
		{
			this->x = x;
			this->y = y;
		}
		Vector2D(double(&arr)[2])
		{
			x = arr[0];
			y = arr[1];
		}

		Vector2D& operator = (const Vector2D& other) {
			if (this != &other) {
				x = other.x;
				y = other.y;
			}
			return *this;
		}
		Vector2D& operator = (const double(&arr)[2]) {
			x = arr[0];
			y = arr[1];
			return *this;
		}
		Vector2D operator + (const Vector2D& other) const {
			return Vector2D(x + other.x, y + other.y);
		}
		Vector2D operator - (const Vector2D& other) const {
			return Vector2D(x - other.x, y - other.y);
		}
		Vector2D& operator+=(const Vector2D& other) {
			x += other.x;
			y += other.y;
			return *this;
		}
		Vector2D& operator-=(const Vector2D& other) {
			x -= other.x;
			y -= other.y;
			return *this;
		}
		Vector2D operator*(const double scalar) {
			return Vector2D(x * scalar, y * scalar);
		}
		Vector2D& operator*=(const double scalar) {
			x *= scalar;
			y *= scalar;
			return *this;
		}
		Vector2D operator-() {
			return Vector2D(-x, -y);
		}
		bool operator==(const Vector2D& other) {
			return (x == other.x) and (y == other.y);
		}
		bool operator!=(const Vector2D& other) {
			return (x != other.x) and (y != other.y);
		}
		bool operator!() {
			return (x == 0) and (y == 0);
		}
		double operator*(const Vector2D& other) {
			return x * other.x + y * other.y;
		}
		double operator*=(const Vector2D& other) {
			return x * other.x + y * other.y;
		}
		double operator^(const Vector2D& other) const{
			double dotProd = x * other.x + y * other.y;
			double lenProd = sqrt((x * x) + (y * y)) * sqrt((other.x * other.x) + (other.y * other.y));
			if (lenProd == 0) {
				return 0;
			}
			double cosTheta = dotProd / lenProd;
			return acos(cosTheta);
		}
		double abs() {
			return sqrt((x * x) + (y * y));
		}
		Vector2D norm() {
			double q = sqrt((x * x) + (y * y));
			return Vector2D((x) / q, (y) / q);
		}

		friend ostream& operator<<(std::ostream& os, const Vector2D& vec) {
			os << "(" << vec.x << ", " << vec.y << ")";
			return os;
		}

	private:
		double x = 0;
		double y = 0;

};

void n_37() {
	Vector2D V(3, 2);
	Vector2D V2(-1, 2);
	cout << V << " | " << V2 << endl;
	cout << V * 3 << " | " << V + V2 << endl;
	V += Vector2D(1, 1);
	cout << V << " | " << -V << endl;
	Vector2D A(0, 1);
	Vector2D B(1, 0);
	double ang = A ^ B;
	cout << ang;
}

int main()
{
    n_37();
}