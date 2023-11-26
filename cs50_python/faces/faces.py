

def convert(text):
    if ":)" in text and ":(" in text:
        text.replace(":)", "🙂")
        text.replace(":(", "🙁")
        return text
    elif ":)" in text:
        text.replace(":)", "🙂")
    elif ":(" in text:
        text.replace(":(", "🙁")
    else:
        return text




def main():
    text = input("How are you? ")
    faces = convert(text)
    print(faces)



main()
