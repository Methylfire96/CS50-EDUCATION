from pyfiglet import Figlet

figlet = Figlet()

print(figlet.getFonts())

ask = figlet.setFont(font=f)
print("which font u wanna use?: ")

print(figlet.renderText(s))
