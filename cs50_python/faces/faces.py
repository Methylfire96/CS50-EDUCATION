
def convert(n):
    if ":)" in text:
        n.replace(":)", "🙂")
        return n
    if ":(" in text:
        n.replace(":(", "🙁")
        return n


text = input ("How are you? ")
convert(text)
