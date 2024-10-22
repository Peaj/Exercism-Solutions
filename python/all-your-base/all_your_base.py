def to_decimal(input_base, digits):
    decimal = 0
    for digit in digits:
        decimal = decimal * input_base + digit
    return decimal

def to_base(number, base):
    if number == 0:
        return [0]
    result = []
    while number > 0:
        number, digit = divmod(number, base)
        result.append(digit)
    return list(reversed(result))

def to_digits(number):
    return [int(d) for d in str(number)]

def rebase(input_base, digits, output_base):
    if input_base < 2:
        raise ValueError("input base must be >= 2")
    if output_base < 2:
        raise ValueError("output base must be >= 2")

    if not all(0 <= d < input_base for d in digits):
        raise ValueError("all digits must satisfy 0 <= d < input base")

    return to_base(to_decimal(input_base, digits), output_base)
