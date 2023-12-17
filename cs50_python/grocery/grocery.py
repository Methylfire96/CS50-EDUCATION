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
                upd(List)

    except EOFError:
             pass

def upd(li):
    total = sum(li.values())
    print(f"{count} {total.upper()}")

main()
