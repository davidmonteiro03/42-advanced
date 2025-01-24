import sys as s

argc = len(s.argv)
if argc < 2:
    exit()
try:
    assert argc == 2, "more than one argument is provided"
    try:
        num = int(s.argv[1])
        print("I'm Even.") if num % 2 == 0 else print("I'm Odd.")
    except Exception:
        raise AssertionError("argument is not an integer")
except Exception as e:
    print(f"AssertionError: {e}")
