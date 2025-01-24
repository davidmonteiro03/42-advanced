import sys as s


def read_user_input() -> str:
    """This function is used to read text from user input."""
    try:
        return input("What is the text to count?\n") + '\n'
    except EOFError:
        return ""


def main():
    """This is a program that takes a single string argument and \
displays the sums of its upper-case characters, \
lower-case characters, punctuation characters, digits and spaces."""
    punctuation_string = r"""!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~"""
    argc = len(s.argv)
    try:
        if argc < 2:
            text = read_user_input()
        else:
            assert argc == 2, "more than one argument is provided"
            text = s.argv[1]
        length = len(text)
        uppers = sum(1 for c in text if c.isupper())
        lowers = sum(1 for c in text if c.islower())
        puncts = sum(1 for c in text if c in punctuation_string)
        spaces = sum(1 for c in text if c.isspace())
        digits = sum(1 for c in text if c.isdigit())
        print(f"The text contains {length} characters:")
        print(f"{uppers} upper letters")
        print(f"{lowers} lower letters")
        print(f"{puncts} punctuation marks")
        print(f"{spaces} spaces")
        print(f"{digits} digits")
    except Exception as e:
        print(f"AssertionError: {e}")


if __name__ == "__main__":
    main()
