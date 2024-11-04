def is_valid(isbn : str):
    if len(numbers := list(isbn.replace('-', ''))) is not 10:
        return False
    
    if numbers[-1] is 'X':
        numbers[-1] = "10"

    if not all(number.isdecimal() for number in numbers):
        return False
    
    return sum(int(number) * (10-index) for index, number in enumerate(numbers)) % 11 is 0