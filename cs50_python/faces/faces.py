

def convert(text):
    if ":)" in text:
        return "🙂"
    elif text == ":(":
        return "☹️"


def main():
    text = input("Are you happy? ")
    faces = text.replace(convert)
    print(faces)



main()
