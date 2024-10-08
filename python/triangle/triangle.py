def triangle(sides):
    return sum(sides) > max(sides) * 2

def equilateral(sides):
    return triangle(sides) and len(set(sides)) == 1

def isosceles(sides):
    return triangle(sides) and len(set(sides)) <= 2

def scalene(sides):
    return triangle(sides) and len(set(sides)) == 3
