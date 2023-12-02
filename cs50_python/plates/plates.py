def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):
    alphabet = [A:Z]
    numbers = [0,1,2,3,4,5,6,7,8,9]
    for c in s:
        if s[0] and s[1] == alphabet:
            return True
        elif s[-1] and s[-2] == numbers:
            return True


main()
