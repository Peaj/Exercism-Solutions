def annotate(minefield):
    if len(set(len(row) for row in minefield)) > 1:
        raise ValueError("The board is invalid with current input.")
    minefield = [list(row) for row in minefield]
    
    for x, row in enumerate(minefield):
        for y, char in enumerate(row):
            if char == '*':
                continue
            if char != ' ':
                raise ValueError("The board is invalid with current input.")
            mines = sum(minefield[cx][cy] == '*'
                        for cy in range(max(0,y-1),min(len(row),y+2))
                        for cx in range(max(0,x-1),min(len(minefield),x+2)))
            if mines > 0:
                minefield[x][y] = str(mines)
            
    minefield = ["".join(row) for row in minefield]
    return minefield
