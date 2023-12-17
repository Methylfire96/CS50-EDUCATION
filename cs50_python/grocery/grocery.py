def main():
    # empty list
    List = {}
    # ask input
    # add item to list
    # keep count of items
    try:
        while True:
            groceries = input("").strip()
            if groceries in List:
                List[groceries] = List.get(groceries, 0) + 1


    except EOFError:
            pass

    upd(List)


def upd(List):
    for groceries, count in List.groceries():
        print(f"{count} {groceries}")

main()
