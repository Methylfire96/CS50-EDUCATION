def main():
    s = input("camelCase: ")
    text = snake(s)
    print("snake_case: ", text)


def snake(s):
    for c in s:
        print(c, end="")
        if c.capitalize():
            return c.split("_")

main()
