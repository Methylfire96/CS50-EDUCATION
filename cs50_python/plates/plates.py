def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):

    if s[2:].startswith("0"):
        return False
    if not s[0:2].isalpha():
        return False
    if not 2 <= len(s) <= 6:
        return False
    


    return True



main()
