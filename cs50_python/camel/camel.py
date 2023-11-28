def main():
    str = input("camelCase: ")
    text = snake(str)
    print(f"snake_case: {text}")


def snake(s):
    snake_case = ""
    for c in s:
        if c.isupper():
            snake_case += "_" + c.lower()
        else:
            snake_case += c
    return snake_case.lstrip("_")


main()
