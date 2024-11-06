from string import ascii_lowercase, punctuation, whitespace

translation = str.maketrans(ascii_lowercase, ascii_lowercase[::-1], punctuation + whitespace)

def encode(plain_text: str) -> str:
    text = plain_text.lower().translate(translation)
    return " ".join([text[i:i+5] for i in range(0,len(text),5)])


def decode(ciphered_text: str) -> str:
    return ciphered_text.translate(translation)
