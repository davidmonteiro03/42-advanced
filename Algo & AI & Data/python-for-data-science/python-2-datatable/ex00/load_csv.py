import pandas as pd


def load(path: str) -> pd.DataFrame:
    """This is a function that takes a path as argument,
writes the dimensions of the data set and returns it."""
    try:
        data_frame: pd.DataFrame = pd.read_csv(path)
        print(f"Loading dataset of dimensions {data_frame.shape}")
        return data_frame
    except Exception as e:
        print(f"Error: {e}")
        return None
