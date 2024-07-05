## Check leter Is a Vowel Or Not ##
vowels = ["a","e","i","o","u"]
a = "x"
def is_vowel(letter):
    for i in vowels:
        if letter == i:
            return f"True"
        else:
            return f"False"
        
print(is_vowel(a))
