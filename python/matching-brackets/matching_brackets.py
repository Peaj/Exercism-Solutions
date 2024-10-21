def is_paired(input_string):

    brackets = "()[]{}"
    stack = []

    for char in input_string:
        index = brackets.find(char)
        if index != -1: # Is Bracket
            if index & 1: # Close Bracket
                if not stack or stack.pop() != brackets[index-1]:
                    return False
            else: # Open Bracket
                stack.append(char)

    return not stack
