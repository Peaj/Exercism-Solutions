#include "raindrops.h"
#include <sstream>

namespace raindrops {
	std::string convert(int number)
	{
		std::stringstream ss;
		bool by3 = number % 3 == 0;
		bool by5 = number % 5 == 0;
		bool by7 = number % 7 == 0;

		if (!(by3 || by5 || by7)) ss << number;
		else
		{
			if (by3) ss << "Pling";
			if (by5) ss << "Plang";
			if (by7) ss << "Plong";
		}

		return ss.str();
	}
}  // namespace raindrops
