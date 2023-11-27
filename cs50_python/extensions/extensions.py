def type(filename):
    dict = {
        ".gif": "image.gif",
        ".jpg": "image.jpg",
        ".jpeg": "image.jpeg",
        ".png": "image.png"
        }

    ext = "." + filename.split(".")[-1].lower()

    if ext in dict:
        return dict[ext]
    else:
        return "application/octet-stream"

if __name__ == "__main__":
    filename = input("File name: ")
    result = type(filename)
    print(f"{result}")
