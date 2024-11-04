def rotate_char(char: str, key: int):
    if not char.isalpha():
        return char
    offset = ord('A') if char.isupper() else ord('a')
    return chr((ord(char)-offset+key)%26+offset)

def rotate(text: str, key: int):
    return ''.join(rotate_char(char,key) for char in text)
