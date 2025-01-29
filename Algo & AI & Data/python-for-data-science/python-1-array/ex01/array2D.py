import numpy as np


def slice_me(family: list, start: int, end: int) -> list:
    """This is a function that takes as parameters a 2D array,
prints its shape, and returns a truncated version of the array
based on the provided start and end arguments."""
    if type(family) is not list or \
       type(start) is not int or \
       type(end) is not int:
        raise ValueError("You must give a list, \
an integer start index and an integer end index.")
    print(f"My shape is : {np.shape(family)}")
    family_np_array: np.ndarray = np.array(family)
    new_family_np_array: np.ndarray = family_np_array[start:end]
    print(f"My new shape is : {new_family_np_array.shape}")
    return new_family_np_array.tolist()
