from ft_filter import ft_filter
import sys as s

def main():
    argc = len(s.argv)
    try:
        assert argc == 3, "the arguments are bad"
        words = s.argv[1].split()
        try:
            length = int(s.argv[2])
        except Exception:
            raise AssertionError("the arguments are bad")
        print(ft_filter(lambda x: len(x) > length, words))
    except Exception as e:
        print(f"AssertionError: {e}")


if __name__ == "__main__":
    main()
