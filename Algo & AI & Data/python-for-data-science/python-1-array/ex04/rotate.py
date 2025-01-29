from load_image import ft_load
from PIL import Image as img, ImageOps as imgops
import numpy as np
import matplotlib.pyplot as plt


def main():
    """This is a program that loads an image,
cuts a square part from it and transpose it to produce a new image."""
    image_path = "animal.jpeg"
    image_array = ft_load(image_path)
    if image_array is None:
        exit(1)
    print(image_array)
    image = img.fromarray(image_array)
    zoom = image.crop((450, 100, 850, 500))
    zoom.save('zoom.jpeg')
    zoom_array = np.array(zoom)
    zoom_array = zoom_array[:, :, :1]
    print(f"New shape after slicing: {zoom_array.shape}")
    print(zoom_array)
    rotate = zoom.rotate(90)
    rotate = imgops.flip(rotate)
    rotate_array = zoom_array[:, :, 0]
    print(f"New shape after Transpose: {rotate_array.shape}")
    print(rotate_array)
    plt.imshow(rotate)
    plt.show()


if __name__ == "__main__":
    main()
