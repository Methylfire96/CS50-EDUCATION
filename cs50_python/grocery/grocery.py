def main():
    # empty list
    List = []
    # ask input
    # add item to list
    # keep count of items
    try:
        while True:
            groceries = input("")
            if groceries in List:
                List[groceries] = List.get(groceries, 0)


    except EOFError:
            upd(List)


def upd(li):
    li = 0
    c = groceries.count(li)
    if c >= 1:
        c = c + 1
        count = sum(c)
    print(f"{count} {List[groceries]}")

main()
