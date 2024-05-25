#include "grains.h"

namespace grains {
	unsigned long long square(int index)
	{
		return 1ull << (index-1);
	}

	unsigned long long total()
	{
		return square(65) - 2;
	}

}  // namespace grains
