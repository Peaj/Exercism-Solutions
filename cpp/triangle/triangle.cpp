#include "triangle.h"

namespace triangle {
	

	flavor kind(double a, double b, double c)
	{
		if (a <= 0 || b <= 0 || c <= 0) throw std::domain_error("Triangles cannot have negative side lengths");
		if (a + b < c || b + c < a || c + a < b) throw std::domain_error("Triangle is invalid");
		if (a == b && b == c) return flavor::equilateral;
		if (a == b || b == c || a == c) return flavor::isosceles;
		return flavor::scalene;
	}
}  // namespace triangle