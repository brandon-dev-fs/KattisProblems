hello = input()
msg = ""

for i in hello:
    if i == "e":
        msg += "ee"
    else:
        msg += i

print(msg)