from S1E9 import Character


class Baratheon(Character):
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
    @classmethod
    def create_lannister(self, first_name, is_alive=True):
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
