def main():
    input = input("What time is it? ")
    result = convert(time)
    print(result)

def convert(time):
    hours, minutes = time.split(":")
    time.hours = 24
    time.minutes = 60
    conv = float((time.hours).(time.minutes))

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
