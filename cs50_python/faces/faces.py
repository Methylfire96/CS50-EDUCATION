

def convert(text):
    if ":)" in text:
        return text.replace(":)", "🙂")
    if ":(" in text:
        return text.replace(":(", "🙁")
    else:
        return text



def main():
    text = input("How are you? ")
    faces = convert(text)
    print(faces)



main()
