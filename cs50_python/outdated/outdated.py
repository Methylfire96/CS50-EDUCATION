def main():

list = [
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]

    while True:
        try:
            date = input("Date: ").split()
            if date in list:
                return switch(date)

        except ValueError:
            print("input is not an integar")


def switch():
    


main()
