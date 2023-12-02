def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):

    if s[0,1] == {A:Z}:
        return True
    if s[0:6] == {A:Z}:
        return True
    if s[-1,-2] == {0:9}:
        return True

main()
