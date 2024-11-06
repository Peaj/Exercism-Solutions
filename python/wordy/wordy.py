def op_plus(a,b):
    return a + b
def op_minus(a,b):
    return a - b
def op_multiplied(a,b):
    return a * b
def op_divided(a,b):
    return a / b

ignored = [ "by" ]

def is_number(token: str) -> bool:
    return token.lstrip('-').isnumeric()

def is_valid(token: str) -> bool:
    return is_number(token) or f"op_{token}" in globals() or token in ignored

def resolve(tokens):
    (a, op, b) = tokens[:3]
    result = globals()[f"op_{op}"](int(a),int(b))
    return [result] + tokens[3:]

def answer(question: str) -> str:
    tokens = question.lstrip('What is').rstrip('?').split()
    tokens = [token for token in tokens if token not in ignored]
    if any(token for token in tokens if not is_valid(token)):
        raise ValueError(f"unknown operation")
    try:
        while len(tokens) > 1:
            tokens = resolve(tokens)
        return int(tokens[0])
    except:
        raise ValueError(f"syntax error")