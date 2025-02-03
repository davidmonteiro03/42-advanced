class calculator:
    """This is a class that is able to do calculations
(addition, multiplication, subtraction, division) of
vector with a scalar."""
    def __init__(self, vector):
        self.vector = vector

    def __add__(self, object) -> None:
        self.vector = [v + object for v in self.vector]
        print(self.vector)

    def __mul__(self, object) -> None:
        self.vector = [v * object for v in self.vector]
        print(self.vector)

    def __sub__(self, object) -> None:
        self.vector = [v - object for v in self.vector]
        print(self.vector)

    def __truediv__(self, object) -> None:
        if object == 0:
            raise ValueError("Can't divide by 0.")
        self.vector = [v / object for v in self.vector]
        print(self.vector)
