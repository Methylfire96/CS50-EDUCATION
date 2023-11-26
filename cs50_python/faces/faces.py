
def convert(n):
    if ":)" in n:
        n = n.replace(":)", "🙂")

    if ":(" in n:
        n = n.replace(":(", "🙁")
    return n


text = input ("How are you? ")
result = convert(text)
print(result)
