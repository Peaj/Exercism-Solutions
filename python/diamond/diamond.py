def rows(letter):
    count = ord(letter) - ord('A')
    output = ["".join(chr(ord('A')+abs(y)) 
                      if abs(x) + abs(y) == count else " " 
                      for y in range(-count, count+1)) 
                      for x in range(-count, count+1)]
    return output
