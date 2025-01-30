from load_image import ft_load
from PIL import Image as img
import numpy as np
import matplotlib.pyplot as plt


def main():
    """This is a program that loads an image,
prints some information about it and display it after "zooming"."""
    image_path = "animal.jpeg"
    image_array = ft_load(image_path)
    if image_array is None:
        exit(1)
    print(image_array)
    image = img.fromarray(image_array)
    zoom = image.crop((450, 100, 850, 500))
    zoom_array: np.ndarray = np.array(zoom)
    zoom_array = zoom_array[:, :, :1]
    print(f"New shape after slicing: {zoom_array.shape}")
    print(zoom_array)
    plt.imshow(zoom)
    plt.show()


if __name__ == "__main__":
    main()
