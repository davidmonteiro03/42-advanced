def ft_filter(function: any, iterable: list) -> list:
    """This is my own ft_filter, which behave like \
the original built-in filter function."""
    return [elem for elem in iterable if function(elem)]
