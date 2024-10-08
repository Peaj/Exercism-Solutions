def square_root(number):
    upper_limit = (number + 1) // 2 
    lower_limit = 0
    guess = upper_limit

    while lower_limit < upper_limit:
        sqr =  guess * guess
        if sqr < number:
            lower_limit = guess
            guess += (upper_limit-guess) // 2
        elif sqr > number:
            upper_limit = guess
            guess -= (guess-lower_limit) // 2
        else:
            return guess
    return None