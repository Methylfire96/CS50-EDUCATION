def main():
    inp = input("Input: ")
    result = conv(inp)
    print(f"Output: {result}")

def conv(c):
        convert = "".join(char for char in c if char.lower() not in {"a", "e", "i", "o", "u"})
        return convert

main()
