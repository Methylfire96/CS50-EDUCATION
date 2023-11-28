def main():
    time = input("What time is it? ")
    converted_meal(time)


def convert(time):

    hours, minutes = map(float, time.split(":"))

    return hours + minutes/60

def meal(conv):

    result = ""

    if 7.0 <= conv <= 8.0:
        result = "breakfast time"

    elif 12.0 <= conv <= 13.0:
        result = "lunch time"

    elif 18.0 <= conv <= 19.0:
        result = "dinner time"

    print(result)
    
def converted_meal(time):
    conv = convert(time)
    meal(conv)

if __name__ == "__main__":
    main()
