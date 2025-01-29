import numpy as np
from PIL import Image as img
from matplotlib import pyplot as plt


def ft_invert(array: np.ndarray) -> np.ndarray:
    """Inverts the color of the image received."""
    invert_array = array.copy()
    invert_array = 255 - invert_array
    plt.imshow(img.fromarray(invert_array))
    plt.show()
    return invert_array


def ft_red(array: np.ndarray) -> np.ndarray:
    """Isolates the red channel of the image received."""
    red_array = array.copy()
    red_array[:, :, 1] = 0
    red_array[:, :, 2] = 0
    plt.imshow(img.fromarray(red_array))
    plt.show()
    return red_array


def ft_green(array: np.ndarray) -> np.ndarray:
    """Isolates the green channel of the image received."""
    green_array = array.copy()
    green_array[:, :, 0] = 0
    green_array[:, :, 2] = 0
    plt.imshow(img.fromarray(green_array))
    plt.show()
    return green_array


def ft_blue(array: np.ndarray) -> np.ndarray:
    """Isolates the blue channel of the image received."""
    blue_array = array.copy()
    blue_array[:, :, 0] = 0
    blue_array[:, :, 1] = 0
    plt.imshow(img.fromarray(blue_array))
    plt.show()
    return blue_array


def ft_grey(array: np.ndarray) -> np.ndarray:
    """Converts the image to greyscale."""
    grey_array = array.copy()
    grey_array = np.dot(grey_array[..., :3], [0.2989, 0.5870, 0.1140])
    plt.imshow(img.fromarray(grey_array))
    plt.show()
    return grey_array
