#include "pangram.h"
#include <string>
#include <iostream>
#include <bitset>

namespace pangram {

	const int letterMask = 67108863; // 2^26 -1

	bool is_pangram(std::string input)
	{
		int charBits = 0;

		//std::cout << input << std::endl << std::endl;

		for (char& c : input) if(std::isalpha(c))
		{
			charBits |= 1 << (c - 'a');
			//std::cout << c << "(" << (int)c << ")" << ":\t" << std::bitset<64>(charBits) << std::endl;
		}

		return letterMask == (charBits & letterMask);
	}

}  // namespace pangram
