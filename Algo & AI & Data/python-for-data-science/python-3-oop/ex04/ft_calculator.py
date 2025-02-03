class calculator:
    """This is a class that is able to do calculations
 (dot product, addition, subtraction) of 2 vectors."""
    @staticmethod
    def dotproduct(V1: list[float], V2: list[float]) -> None:
        """This is a method that calculates the
dot product between 2 vectors."""
        result = sum(a * b for a, b in zip(V1, V2))
        print(f"Dot product is: {result}")

    @staticmethod
    def add_vec(V1: list[float], V2: list[float]) -> None:
        """This is a method that adds 2 vectors."""
        result = [float(a + b) for a, b in zip(V1, V2)]
        print(f"Add Vector is : {result}")

    @staticmethod
    def sous_vec(V1: list[float], V2: list[float]) -> None:
        """This is a method that subtracts 2 vectors."""
        result = [float(a - b) for a, b in zip(V1, V2)]
        print(f"Sous Vector is: {result}")
