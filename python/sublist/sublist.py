"""
This exercise stub and the test suite contain several enumerated constants.

Enumerated constants can be done with a NAME assigned to an arbitrary,
but unique value. An integer is traditionally used because it’s memory
efficient.
It is a common practice to export both constants and functions that work with
those constants (ex. the constants in the os, subprocess and re modules).

You can learn more here: https://en.wikipedia.org/wiki/Enumerated_type
"""

# Possible sublist categories.
# Change the values as you see fit.
SUBLIST = 0
SUPERLIST = 1
EQUAL = 2
UNEQUAL = 3

def get_delimiter(ignore_characters):
    for i in range(0,256):
        if chr(i) not in ignore_characters:
            return chr(i)

def sublist(list_one, list_two):
    # Adress concern that input may contain delimter
    # https://exercism.org/tracks/python/exercises/sublist/approaches/using-strings
    delimiter = get_delimiter(str(list_one)+str(list_two))
    
    string_one = delimiter.join(map(str,list_one))+delimiter
    string_two = delimiter.join(map(str,list_two))+delimiter

    if string_one == string_two:
        return EQUAL
    if string_one in string_two:
        return SUBLIST
    if string_two in string_one:
        return SUPERLIST
    return UNEQUAL