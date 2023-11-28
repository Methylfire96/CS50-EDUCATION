def main():
    ask = input("What time is it? ")
    result = convert(ask)
    print(result)

def convert(time):
    ask = input("What time is it? ")
    hours, minutes = ask.split(":")

    hours = float(ask[0])
    minutes =float(ask[2])
    conv = hours.minutes

    if 7.0 <= conv <= 8.0:
        return "breakfast time"

    if 12.0 <= conv <= 13.0:
        return "lunch time"

    if 18.0 <= conv <= 19.0:
        return "dinner time"

    else:
        return ""


if __name__ == "__main__":
    main()


math = input("Expression: ")

store = math.split()

val1 = float(store[0])
operator = (store[1])
val2 = float(store[2])
