def square(x: int | float) -> int | float:
    """This is a function that returns the square of a number."""
    return x * x


def pow(x: int | float) -> int | float:
    """This is a function that returns the number raised to the power of itself."""
    return x ** x


def outer(x: int | float, function) -> object:
    """This is a function that returns an inner function which applies the given function to a count."""
    count = x

    def inner() -> float:
        """This is a function that updates and returns the count."""
        nonlocal count
        count = function(count)
        return count

    return inner
