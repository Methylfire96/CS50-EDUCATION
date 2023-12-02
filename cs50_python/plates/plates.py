def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):

    for c in s:
        if s[0] == c.isnumber():
            return False


main()
