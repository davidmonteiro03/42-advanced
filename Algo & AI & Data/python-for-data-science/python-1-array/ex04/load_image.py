import numpy as np
from PIL import Image as img


def ft_load(path: str) -> np.ndarray:
    """This is a function that loads an image, prints its format,
and its pixels content in RGB format."""
    try:
        image = img.open(path)
        array = np.array(image)
        print(f"The shape of image is: {array.shape}")
        return array
    except Exception as e:
        print(f"Error: {e}")
        return None
