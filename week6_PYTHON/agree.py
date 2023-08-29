#s= input("Do u agree?")

#if s == "Y" or s == "y": ## also same if s in ["Y","y"]:
    #print("Agreed")
#elif s == "N" or s == "n": ## also same if s in ["N","n"]:
    #print("not agreed")




s= input("Do u agree?")
s = s.lower()


if s in ["y","yes"]:
    print("Agreed")
elif s in ["N","n"]:
    print("not agreed")



