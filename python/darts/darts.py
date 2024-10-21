def score(x, y):
    sqr_length = x*x+y*y
    if sqr_length > 10 ** 2:
        return 0
    if sqr_length > 5 ** 2:
        return 1
    if sqr_length > 1 ** 2:
        return 5
    return 10
