import re 

FILENAME = "101-strtow.c"
tabbed = []
file = open(FILENAME)
lines = file.readlines()

for line in lines:
    new = re.sub(r'    ', '\t', line)
    tabbed.append(new)
file.close()

file = open(FILENAME, "w")
for new in tabbed:
    file.write(new)

