def NULL_not_found(object: any) -> int:
    if object is None:
        print(f"Nothing: {object} {type(object)}")
        return 0
    if object != object:
        print(f"Cheese: {object} {type(object)}")
        return 0
    if object == 0:
        if type(object) is int:
            print(f"Zero: {object} {type(object)}")
        else:
            print(f"Fake: {object} {type(object)}")
        return 0
    if object == '':
        print(f"Empty: {type(object)}")
        return 0
    print("Type not Found")
    return 1
