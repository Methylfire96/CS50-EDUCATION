from pyfiglet import Figlet
from cs50 import get_string

figlet = Figlet()


ask = get_string("which font u wanna use?: ")
figlet.setFont(font=ask)
text = get_string("which text u wanna put in diff font?: ")
print(figlet.renderText(text))
