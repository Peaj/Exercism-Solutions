def is_pangram(sentence):
    return set("thequickbrownfoxjumpsoverthelazydog") <= set(sentence.lower())