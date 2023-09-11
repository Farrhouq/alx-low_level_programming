import re
import sys


# handle trailing whitespace
def handle_trailing_space(line):
    if line is not None:
        return f"{line.rstrip()}\n"
    return line


# handle tabs
def handle_tabs(line):
    new = re.sub(r'    ', '\t', line)
    return new


# handle return brackets
def handle_return_brackets(line):
    line = line.strip()
    if "return" in line:
        start_index = line.index("return")
        mini = line[start_index:].split()
        t = f"{mini[0]} ({' '.join(mini[1:])})"
        mini[1] = f"({mini[1]})"
        return t


if __name__ == "__main__":
    FILENAME = sys.argv[1]
    print(sys.argv[1])
    with open(FILENAME, "r") as file:
        lines = file.readlines()
        file.close()
    with open(FILENAME, "w") as file:
        for line in lines:
            if line is not None:
                line = handle_tabs(line)
                line = handle_return_brackets(line)
                line = handle_trailing_space(line)
                file.write(line)
        file.close()
