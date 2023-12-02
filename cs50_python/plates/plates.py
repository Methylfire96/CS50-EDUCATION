def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):


    if not s[:2].isalpha():
        return False

    if not 2 <= len(s) <= 6:
        return False

    if any(c.isdigit() for c in s[2:-1]):
        return False

    if any(not (c.isdigit() or c.isalpha()) for c in s):
        return False

    return True



main()
