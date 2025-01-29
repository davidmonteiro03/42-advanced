def give_bmi(height: list[int | float],
             weight: list[int | float]) -> list[int | float]:
    """This is a function that takes 2 lists of integers or floats
and returns a list of BMI values."""
    if type(height) is not list or type(weight) is not list:
        raise ValueError("The arguments must be lists.")
    if not any([elem for elem in height
                if type(elem) is float or type(elem) is int]) or \
       not any([elem for elem in weight
                if type(elem) is float or type(elem) is int]):
        raise ValueError("Each element of the lists must be int or float.")
    if len(height) != len(weight):
        raise ValueError("The lists must have the same size.")
    return [w / (h ** 2) for h, w in zip(height, weight)]


def apply_limit(bmi: list[int | float], limit: int) -> list[bool]:
    """This is a function that accepts a list of integers or floats
and an integer representing a limit and returns a list of booleans
(True if above the limit)."""
    if type(bmi) is not list or type(limit) is not int:
        raise ValueError("BMI must be a list and limit must be an integer.")
    if not any([elem for elem in bmi
                if type(elem) is float or type(elem) is int]):
        raise ValueError("Each element of the list must be int or float.")
    return [b > limit for b in bmi]
