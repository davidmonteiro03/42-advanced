def ft_filter(function: any, iterable: list) -> list:
    return [elem for elem in iterable if function(elem)]
