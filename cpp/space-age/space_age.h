#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

	constexpr double earth_years_per_second = 1.0 / 31557600.0;
	constexpr double mercury_years_per_second = earth_years_per_second / 0.2408467;
	constexpr double venus_years_per_second = earth_years_per_second / 0.61519726;
	constexpr double mars_years_per_second = earth_years_per_second / 1.8808158;
	constexpr double jupiter_years_per_second = earth_years_per_second / 11.862615;
	constexpr double saturn_years_per_second = earth_years_per_second / 29.447498;
	constexpr double uranus_years_per_second = earth_years_per_second / 84.016846;
	constexpr double neptune_years_per_second = earth_years_per_second / 164.79132;

	class space_age
	{
	public:
		space_age(double age_in_seconds);
		double seconds() const;
		double on_earth() const;
		double on_mercury() const;
		double on_venus() const;
		double on_mars() const;
		double on_jupiter() const;
		double on_saturn() const;
		double on_uranus() const;
		double on_neptune() const;

	private:
		double age_in_seconds;
	};

}  // namespace space_age

#endif // SPACE_AGE_H