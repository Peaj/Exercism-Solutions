#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int number)
	: name(std::move(name)), generation(number), current_system(star_map::System::Sol)
{

}

heaven::Vessel::Vessel(std::string name, int number, star_map::System system)
	: name(std::move(name)), generation(number), current_system(system)
{

}

heaven::Vessel heaven::Vessel::replicate(std::string name)
{
	return Vessel{ std::move(name),generation+1,current_system };
}

void heaven::Vessel::make_buster()
{
	++busters;
}

bool heaven::Vessel::shoot_buster()
{
	return busters > 0 ? busters-- : false;
}

std::string heaven::get_older_bob(Vessel& vessel1, Vessel& vessel2)
{
	return vessel1.generation < vessel2.generation ? vessel1.name : vessel2.name;
}

bool heaven::in_the_same_system(Vessel& vessel1, Vessel& vessel2)
{
	return vessel1.current_system == vessel2.current_system;
}