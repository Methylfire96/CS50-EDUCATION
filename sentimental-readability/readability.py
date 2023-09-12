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
    sentences = text.count('.') + text.count('!') + text.count('?'))


def get_grade(index):