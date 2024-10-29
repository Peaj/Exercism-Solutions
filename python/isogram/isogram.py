def is_isogram(string):
    clean = [char for char in string.lower() if char.isalpha()]
    return len(clean) == len(set(clean))
