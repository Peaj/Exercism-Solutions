dirs = [(1,0),(0,1),(-1,0),(0,-1)]

def spiral_matrix(size):
    spiral = [[0] * size for i in range(size)]
    x,y = 0,0
    dir = 0
    dx, dy = dirs[dir%len(dirs)]
    
    for i in range(size**2):
        spiral[y][x] = i+1
        if (not 0 <= x+dx < size or 
            not 0 <= y+dy < size or 
            spiral[y+dy][x+dx] != 0):
            dir +=1
            dx,dy = dirs[dir%len(dirs)]
        x += dx
        y += dy

    return spiral