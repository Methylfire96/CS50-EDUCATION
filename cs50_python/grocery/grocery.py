def main():
    # empty list
    List = []
    # ask input
    # add item to list
    # keep count of items
    try:
        while True:
            groceries = input("").strip()

            List[groceries] = List.get(groceries, 0) + 1


    except EOFError:
            pass

    upd(List)


def upd(List):
    for item, count in List.items():
        print(f"{count} {item}")

main()
