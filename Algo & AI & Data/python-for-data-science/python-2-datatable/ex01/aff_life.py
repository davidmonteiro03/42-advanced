from load_csv import load
from matplotlib import pyplot as plt


def main():
    """This is a program that displays the country
information of a specific 42 campus."""
    main_data = load("life_expectancy_years.csv")
    if main_data is None:
        exit(1)
    # plt.show()


if __name__ == "__main__":
    main()
