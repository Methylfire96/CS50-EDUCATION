

def convert(text):
    if ":)" in text:
        return text.replace(":)", "🙂")
    elif ":(" in text:
        return text.replace(":(", "☹️")
    else:
        return text



def main():
    text = input("Are you happy? ")
    faces = convert(text)
    print(faces)



main()
