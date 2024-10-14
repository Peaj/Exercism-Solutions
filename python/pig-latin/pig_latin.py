vowels = ['a', 'e', 'i', 'o', 'u']
special = ["xr", "yt"]

def translate(text):
    words = []
    for word in text.split():
        words.append(translate_word(word)+"ay")

    return ' '.join(words)

def translate_word(word):
    move = ""
    for a, b in zip(word,word[1:]):
        ab = a+b
        if a in vowels or ab in special:
            return word[len(move):] + move
        else:
            move += a
            if ab == "qu":
                move += b
        if b == 'y':
            return word[len(move):] + move