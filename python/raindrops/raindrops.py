def convert(number):
    sounds = {3: "Pling", 5: "Plang", 7: "Plong"}
    result = (sound for div, sound in sounds.items() if not number % div)
    return "".join(result) or str(number)
    