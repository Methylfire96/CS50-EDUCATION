def main():
    # empty list
    List = {}
    # try & except
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

    # count and sort groceries
    # print upper
def upd(List):
    for item, count in sorted(List.items()):
        print(f"{count} {item.upper()}")

main()
