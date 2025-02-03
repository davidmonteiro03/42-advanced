from S1E9 import Character


class Baratheon(Character):
    """This is a class that represents the Baratheon family."""
    def __init__(self, first_name, is_alive=True):
        super().__init__(first_name, is_alive)
        self.family_name = "Baratheon"
        self.eyes = "brown"
        self.hairs = "dark"

    def __str__(self):
        return f"Vector: ('{self.family_name}', '{self.eyes}', '{self.hairs}')"

    def __repr__(self):
        return str(self)

    def die(self) -> None:
        """This is a method that kills the character."""
        self.is_alive = False


class Lannister(Character):
    """This is a class that represents the Lannister family."""
    def __init__(self, first_name, is_alive=True):
        super().__init__(first_name, is_alive)
        self.family_name = "Lannister"
        self.eyes = "blue"
        self.hairs = "light"

    @classmethod
    def create_lannister(self, first_name, is_alive=True):
        """This is a method that returns a new Lannister object."""
        return Lannister(first_name, is_alive)

    def __str__(self):
        return f"Vector: ('{self.family_name}', '{self.eyes}', '{self.hairs}')"

    def __repr__(self):
        return str(self)

    def die(self) -> None:
        """This is a method that kills the character."""
        self.is_alive = False
