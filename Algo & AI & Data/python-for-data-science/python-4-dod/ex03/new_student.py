import random
import string
from dataclasses import dataclass, field


def generate_id() -> str:
    """This is a function that generates a \
random 15-character string ID."""
    return "".join(random.choices(string.ascii_lowercase, k=15))


@dataclass
class Student:
    """This is a class that represents a student."""
    name: field
    surname: field
    active: field
    login: field
    id: field

    def __init__(self, name, surname):
        """This is a constructor that initializes a \
student with a name and surname."""
        self.name = name
        self.surname = surname
        self.active = True
        self.login = self.name[0] + self.surname
        self.id = generate_id()
