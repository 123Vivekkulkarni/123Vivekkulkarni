import random
import string

def Password_genrator(pass_length):
    letters = string.ascii_letters
    num = string.digits
    Symbols = string.punctuation

    all_chars = letters + num + Symbols

    temp = random.sample(all_chars,pass_length)
    Pass = ''.join(temp)
    return Pass


Length = int(input('Enter The Length of the password between 7 to 10 characters or more than this also: '))

password = Password_genrator(Length)

print(password)