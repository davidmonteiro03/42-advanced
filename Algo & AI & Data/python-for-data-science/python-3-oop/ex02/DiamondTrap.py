from S1E7 import Baratheon, Lannister


class King(Baratheon, Lannister):
    """This is a class that represents the King."""
    def __init__(self, first_name, is_alive=True):
        super().__init__(first_name, is_alive)

    def get_eyes(self):
        """This is a method to get the eyes value."""
        return self.eyes

    def get_hairs(self):
        """This is a method to get the hairs value."""
        return self.hairs

    def set_eyes(self, eyes):
        """This is a method to set the eyes value."""
        self.eyes = eyes

    def set_hairs(self, hairs):
        """This is a method to set the hairs value."""
        self.hairs = hairs
