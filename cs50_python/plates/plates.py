def is_valid(s):
    # Check if the length is between 2 and 6 characters
    if not (2 <= len(s) <= 6):
        return False

    # Check if all characters in the first two positions are letters
    if not s[:2].isalpha():
        return False

    # Check if the last character is a number and the first number is not '0'
    if not s[-1].isdigit() or s[2].isdigit() or s[0] == '0':
        return False

    # Check if there are no periods, spaces, or punctuation marks
    if any(char in ". ,;:'\"?!@#$%^&*()-_=+[]{}|\\<>/`~" for char in s):
        return False

    # If all conditions are met, the plate is valid
    return True


def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


if __name__ == "__main__":
    main()
