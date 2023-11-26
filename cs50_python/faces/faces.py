def main(convert):
    text = input("Are you happy? ")
    return text

def convert(text):
    if text == ":)":
        return "🙂"
    elif text == (":("):
        return "☹️"



main(convert)
