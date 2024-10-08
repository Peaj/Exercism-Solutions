def leap_year(year):
    return not year & 3 and (year % 100 != 0 or year % 400 == 0)