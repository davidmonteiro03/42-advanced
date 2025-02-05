def callLimit(limit: int):
    """This is a function that sets a limit on the number of times \
a function can be called."""
    count = limit

    def callLimiter(function):
        """This is a function that wraps another function to \
enforce the call limit."""
        def limit_function(*args: any, **kwds: any):
            """This is a function that checks the call limit \
before executing the wrapped function."""
            nonlocal count

            if count > 0:
                count -= 1
                function(*args, **kwds)
            else:
                print(f"Error: {function} call too many times")

        return limit_function

    return callLimiter
