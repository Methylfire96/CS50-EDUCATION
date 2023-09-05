import sys
from pyfiglet import Figlet
from cs50 import get_string

figlet = Figlet()
figlet.getFonts()
try:
    ask = get_string("what font do we use?: ")
    figlet.setFont(font=ask)
    text = get_string("Which text do you want to put in a different font?: ")
    print(figlet.renderText(text))
    sys.exit(0)
except Exception as e:
    print("Invalid usage", e)
sys.exit(1)
