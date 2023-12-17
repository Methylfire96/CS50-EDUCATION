def main():
    # empty list
    List = []
    # ask input
    # add item to list
    # keep count of items
    try:
        while True:
            groceries = input("")
            List.append(groceries)
            count_groceries = int(groceries)
            if count_groceries >= 1:
                groceries.count()
                groceries = groceries + 1

    except EOFError:
             pass

def list(li):
    total = sum(li.values())
    print(f"{groceries.count()} {total}")

main()
