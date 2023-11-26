def formula(mass):
    lightspeed = 300000000
    e = mass * lightspeed**2

    return e

mass = int(input("Mass: "))
result = formula(mass)
print(result)
