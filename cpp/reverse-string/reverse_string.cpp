#include "reverse_string.h"

namespace reverse_string {
	std::string reverse_string(const std::string& string)
	{
		size_t length = string.size();
		std::string reverse{string};
		for (size_t i = 0; i < length; ++i)
		{
			size_t r = length - i - 1;
			reverse[i] = string[r];
		}
		return reverse;
	}
}  // namespace reverse_string
