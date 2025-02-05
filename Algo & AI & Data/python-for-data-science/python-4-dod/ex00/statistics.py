def ft_mean(data: list[any]) -> any:
    """This is a function that returns the mean of a data set."""
    try:
        return sum(data) / len(data)
    except Exception:
        return None


def ft_median(data: list[any]) -> any:
    """This is a function that returns the median of a data set."""
    try:
        _ = sorted(data)
        n = len(_)
        return _[n // 2] if n % 2 != 0 else (_[n // 2 - 1] + _[n // 2]) / 2
    except Exception:
        return None


def ft_percentile(data: list[any], k: int) -> any:
    """This is a function that returns the percentile k of a data set."""
    try:
        _ = sorted(data)
        n = len(_)
        __ = (n - 1) * k / 100
        i = int(__)
        d = __ - i
        return _[i] * (1 - d) + _[i + 1] * d if i + 1 < n else _[i]
    except Exception:
        return None


def ft_quartile(data: list[any]) -> list[any]:
    """This is a function that returns the Quartile (25% and 75%) \
of a data set."""
    try:
        q25, q75 = ft_percentile(data, 25), ft_percentile(data, 75)
        if q25 is None or q75 is None:
            raise Exception("ERROR")
        return [q25, q75]
    except Exception:
        return None


def ft_var(data: list[any]) -> any:
    """This is a function that returns the variance of a data set."""
    try:
        return sum([(_ - ft_mean(data)) ** 2 for _ in data]) / len(data)
    except Exception:
        return None


def ft_std(data: list[any]) -> any:
    """This is a function that returns the standard deviation \
of a data set."""
    try:
        return ft_var(data) ** 0.5
    except Exception:
        return None


def ft_statistics(*args: any, **kwargs: any) -> None:
    """This is a function that makes the Mean, Median, \
Quartile (25% and 75%), Standard Deviation and Variance \
according to the **kwargs ask."""
    numbers, asked = list(args), list(kwargs.values())
    for a in asked:
        if a == "mean":
            mean = ft_mean(numbers)
            print("ERROR" if mean is None else f"mean : {mean}")
        elif a == "median":
            median = ft_median(numbers)
            print("ERROR" if median is None else f"median : {median}")
        elif a == "quartile":
            quartile = ft_quartile(numbers)
            print("ERROR" if quartile is None else f"quartile : {quartile}")
        elif a == "std":
            std = ft_std(numbers)
            print("ERROR" if std is None else f"std : {std}")
        elif a == "var":
            var = ft_var(numbers)
            print("ERROR" if var is None else f"var : {var}")
