#include "lasagna_master.h"

namespace lasagna_master {

	

	int preparationTime(const std::vector<std::string>& layers, int preparationTime)
	{
		return layers.size() * preparationTime;
	}

	amount quantities(const std::vector<std::string>& layers)
	{
		amount result{ 0, 0.0 };
		for (const std::string& layer : layers)
		{
			if (layer == "sauce") result.sauce += 0.2;
			if (layer == "noodles") result.noodles += 50;
		}
		return result;
	}

	void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList)
	{
		myList.back() = friendsList.back();
	}

	void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient)
	{
		myList.back() = secretIngredient;
	}

	std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions)
	{
		double factor = portions / 2.0;
		std::vector<double> result(quantities);
		for (double& quantity : result) quantity *= factor;
		return result;
	}

}  // namespace lasagna_master
