def classify(number):
    """ A perfect number equals the sum of its positive divisors.

    :param number: int a positive integer
    :return: str the classification of the input integer
    """
    if number <= 0:
        raise ValueError("Classification is only possible for positive integers.")
    result = sum(i for i in range(1,number//2+1) if number % i == 0)
    if number < result:
        return 'abundant'
    if number > result:
        return 'deficient'
    return 'perfect'
