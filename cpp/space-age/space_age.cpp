#include "space_age.h"

namespace space_age {
	space_age::space_age(double age_in_seconds)
		: age_in_seconds{ age_in_seconds }
	{
	}

	double space_age::seconds() const
	{
		return age_in_seconds;
	}

	double space_age::on_earth() const
	{
		return age_in_seconds * earth_years_per_second;
	}
	double space_age::on_mercury() const
	{
		return age_in_seconds * mercury_years_per_second;
	}
	double space_age::on_venus() const
	{
		return age_in_seconds * venus_years_per_second;
	}
	double space_age::on_mars() const
	{
		return age_in_seconds * mars_years_per_second;
	}
	double space_age::on_jupiter() const
	{
		return age_in_seconds * jupiter_years_per_second;
	}
	double space_age::on_saturn() const
	{
		return age_in_seconds * saturn_years_per_second;
	}
	double space_age::on_uranus() const
	{
		return age_in_seconds * uranus_years_per_second;
	}
	double space_age::on_neptune() const
	{
		return age_in_seconds * neptune_years_per_second;
	}
}  // namespace space_age
