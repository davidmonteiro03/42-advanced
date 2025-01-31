from load_csv import load
from matplotlib import pyplot as plt


def ft_ceil(value: float) -> int:
    """This is a function that calculates
the ceiling value of a float number."""
    if value == int(value):
        return int(value)
    return int(value) + 1


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
    """This is a program that displays the country
information of a specific 42 campus and a country of your choice."""
    try:
        main_data = load("population_total.csv")
        campus_country = "Portugal"
        choice_country = "Spain"
        required_columns = [f"{c}" for c in range(1800, 2051)]
        campus_data = main_data[
            main_data.get("country") == campus_country
        ].filter(items=required_columns)
        choice_data = main_data[
            main_data.get("country") == choice_country
        ].filter(items=required_columns)
        years = list(map(int, campus_data.columns))
        campus_values = campus_data.values.flatten().tolist()
        choice_values = choice_data.values.flatten().tolist()
        campus_values = [ft_stof(v) for v in campus_values]
        choice_values = [ft_stof(v) for v in choice_values]
        max_value = max(max(campus_values), max(choice_values))
        if max_value < 10e3:
            dec, unit = 1, ''
        elif max_value < 10e6:
            dec, unit = 1e3, 'k'
        elif max_value < 10e9:
            dec, unit = 1e6, 'M'
        else:
            dec, unit = 1e9, 'B'
        step = ft_ceil(max_value / (50 * dec)) * (10 * dec)
        yticks = [i for i in range(0, int(max_value + step), int(step))]
        yticks = [tick for tick in yticks if tick > 0]
        ylabels = [f"{tick / dec:.0f}{unit}" for tick in yticks]
        plt.figure("Compare my country")
        plt.title("Population Projections")
        plt.xlabel("Year")
        plt.ylabel("Population")
        plt.xticks([y for y in range(min(years), max(years) + 1, 40)])
        plt.yticks(yticks, ylabels)
        plt.plot(years, campus_values, label=campus_country, color="steelblue")
        plt.plot(years, choice_values, label=choice_country, color="green")
        plt.legend(loc="lower right")
        plt.show()
    except Exception as e:
        print(f"Error: {e}")
        exit(1)


if __name__ == "__main__":
    main()
