import sys
from pyfiglet import Figlet

figlet = Figlet()
figlet.getFonts()
try:
    ask = input("what font do we use?: ")
    figlet.setFont(font=ask)
    text = input("Which text do you want to put in a different font?: ")
    print(figlet.renderText(text))
    sys.exit(0)
except Exception as e:
    print("Invalid usage", e)
sys.exit(1)
