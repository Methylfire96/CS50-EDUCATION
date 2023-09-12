# TODO
from cs50 import get_string

def main():
    while True:
        text = get_string("Please enter your text: ")
        if text.isalpha:
            break
        else:
            print("Invalid structure")
    index = calc_index(text)
    grade = get_grade(index)
    print(f"Grade {grade}")


def calc_index(text):
    letters = sum(c.isalpha() for c in text)
    words = len(text.split())
    sentences = text.count('.') + text.count('!') + text.count('?')
    L = (letters/words) * 100
    S = (sentences/ words) * 100
    index = 0.0588 * L - 0.296 * S - 15.8
    return round(index)

def get_grade(index):
    if index 