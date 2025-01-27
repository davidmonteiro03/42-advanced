import sys as s


def main():
    """This is a program that takes a string as \
an argument and encodes it into Morse Code."""
    argc = len(s.argv)
    NESTED_MORSE = {" ": "/",
                    "A": ".-",
                    "B": "-...",
                    "C": "-.-.",
                    "D": "-..",
                    "E": ".",
                    "F": "..-.",
                    "G": "--.",
                    "H": "....",
                    "I": "..",
                    "J": ".---",
                    "K": "-.-",
                    "L": ".-..",
                    "M": "--",
                    "N": "-.",
                    "O": "---",
                    "P": ".--.",
                    "Q": "--.-",
                    "R": ".-.",
                    "S": "...",
                    "T": "-",
                    "U": "..-",
                    "V": "...-",
                    "W": ".--",
                    "X": "-..-",
                    "Y": "-.--",
                    "Z": "--..",
                    "1": ".----",
                    "2": "..---",
                    "3": "...--",
                    "4": "....-",
                    "5": ".....",
                    "6": "-....",
                    "7": "--...",
                    "8": "---..",
                    "9": "----.",
                    "0": "-----"}
    try:
        assert argc == 2, "the arguments are bad"
        try:
            string = s.argv[1]
            output = ""
            for i in range(len(string)):
                if i > 0:
                    output += " "
                output += NESTED_MORSE[string[i].upper()]
            print(output)
        except Exception:
            raise AssertionError("the arguments are bad")
    except Exception as e:
        print(f"AssertionError: {e}")


if __name__ == "__main__":
    main()
