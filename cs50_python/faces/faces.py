
def convert(n):
    n.replace(":)", "🙂")
    n.replace(":(", "🙁")
    return n


text = input ("How are you? ")
convert(text)
