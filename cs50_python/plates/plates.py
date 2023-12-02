def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):
    alphabet = {A:Z}
    numbers = [0:9]
    for c in s:
        if s[0] and s[1] == {A:Z}:
            return True


main()
