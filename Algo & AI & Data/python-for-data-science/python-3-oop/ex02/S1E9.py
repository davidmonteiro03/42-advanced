from abc import ABC, abstractmethod


class Character(ABC):
    """This is a class that represents a character."""
    def __init__(self, first_name, is_alive=True):
        """This is a method that initializes the character."""
        self.first_name = first_name
        self.is_alive = is_alive

    @abstractmethod
    def die(self) -> None:
        """This is a abstrat method that does nothing."""
        pass


class Stark(Character):
    """This is a class that inherits from Character."""
    def die(self) -> None:
        """This is a method that kills the character."""
        self.is_alive = False
