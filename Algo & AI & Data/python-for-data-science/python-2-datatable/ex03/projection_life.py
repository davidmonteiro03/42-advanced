from load_csv import load
from matplotlib import pyplot as plt


def ft_stof(input: str) -> float:
    """This is a function that converts a string into a float number."""
    try:
        result = float(input)
        return result
    except Exception:
        result = float(input[:-1])
        if input[-1] == 'k':
            result *= 1e3
        elif input[-1] == 'M':
            result *= 1e6
        elif input[-1] == 'B':
            result *= 1e9
        return result


def main():
    """This is a program that displays
the projection of life expectancy in relation to
the gross national product of the year 1900 for each country."""
    try:
        requested_year = 1900
        prod_path = "income_per_person_gdppercapita_ppp_inflation_adjusted.csv"
        life_path = "life_expectancy_years.csv"
        prod_data = load(prod_path).filter(items=[f"{requested_year}"])
        life_data = load(life_path).filter(items=[f"{requested_year}"])
        prod_values = prod_data.values.flatten().tolist()
        life_values = life_data.values.flatten().tolist()
        prod_values = [ft_stof(v) for v in prod_values]
        life_values = [ft_stof(v) for v in life_values]
        plt.figure("Draw my year")
        plt.title(f"{requested_year}")
        plt.xlabel("Gross domestic product")
        plt.ylabel("Life Expectancy")
        plt.scatter(prod_values, life_values)
        plt.xscale(value="log")
        x_labels = ["300", "1k", "10k"]
        x_ticks = [ft_stof(lbl) for lbl in x_labels]
        plt.xticks(x_ticks, x_labels)
        plt.show()
    except Exception as e:
        print(f"Error: {e}")
        exit(1)


if __name__ == "__main__":
    main()
