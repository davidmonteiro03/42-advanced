from load_csv import load
from matplotlib import pyplot as plt


def ft_stof(input: str) -> float:
    """This is a function that converts a string into a float number."""
    result = float(input[:-1])
    if input[-1] == 'k':
        result *= 1e3
    elif input[-1] == 'M':
        result *= 1e6
    elif input[-1] == 'B':
        result *= 1e9
    return result


def ft_ftos(input: float) -> str:
    """This is a function that converts a float number into a string."""
    result = ""
    i = 0
    while input >= 1e3:
        input = input / 1e3
        i += 1
    result = f"{int(input)}"
    if i == 1:
        result += 'k'
    elif i == 2:
        result += 'M'
    elif i == 3:
        result += 'B'
    return result


def main():
    """This is a program that displays the country
information of 2 specific 42 campuses."""
    try:
        main_data = load("population_total.csv")
        local_campus = "Portugal"
        choice_campus = "Spain"
        required_columns = [f"{c}" for c in range(1800, 2051)]
        local_data = main_data[
            main_data.get("country") == local_campus
        ].filter(items=required_columns)
        choice_data = main_data[
            main_data.get("country") == choice_campus
        ].filter(items=required_columns)
        years = list(map(int, local_data.columns))
        local_values = local_data.values.flatten().tolist()
        choice_values = choice_data.values.flatten().tolist()
        local_values = [ft_stof(v) for v in local_values]
        choice_values = [ft_stof(v) for v in choice_values]
        plt.figure("Compare my country")
        plt.title("Population Projections")
        plt.xlabel("Year")
        plt.ylabel("Population")
        plt.xticks([y for y in range(min(years), max(years) + 1, 40)])
        plt.plot(years, local_values, label=local_campus, color="steelblue")
        plt.plot(years, choice_values, label=choice_campus, color="green")
        plt.legend(loc="lower right")
        plt.show()
    except Exception as e:
        print(f"Error: {e}")
        exit(1)


if __name__ == "__main__":
    main()
