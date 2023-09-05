import sys
from pyfiglet import Figlet
from cs50 import get_string

figlet = Figlet()
figlet.getFonts()
try:
    ask = get_string("Which font do you want to use?: ")
    figlet.setFont(font=ask)
    text = get_string("Which text do you want to put in a different font?: ")
    print(figlet.renderText(text))
    Figlet.exit(0)
except Exception as e:
    print("Error:", e)
    Figlet.exit(1)
