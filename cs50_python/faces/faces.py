

def convert(text):
    if ":)" in text:
        return text.replace(":)", "🙂")
    if ":(" in text:
        return text.replace(":(", "🙁")




def main():
    text = input("How are you? ")
    faces = convert(text)
    print(faces)



main()
