from load_csv import load
from matplotlib import pyplot as plt


def main():
    """This is a program that displays the country
information of a specific 42 campus."""
    try:
        main_data = load("life_expectancy_years.csv")
        local_campus = "Portugal"
        required_data = main_data[main_data.get("country") == local_campus]
        years = list(map(int, required_data.columns.drop("country")))
        values = required_data.drop("country").values.flatten().tolist()
        plt.figure("Draw my country")
        plt.title(f"{local_campus} Life expectancy Projections")
        xticks = [y for y in years if y % 40 == 0]
        plt.xticks(xticks)
        plt.xlabel("Year")
        plt.ylabel("Life expectancy")
        plt.plot(years, values)
        plt.show()
    except Exception as e:
        print(f"Error: {e}")
        exit(1)


if __name__ == "__main__":
    main()
