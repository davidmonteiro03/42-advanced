# import os


def ft_tqdm(lst: range) -> None:
    """This is my own ft_tqdm, which behave like \
the original tqdm function."""
    length = len(lst)
    output_width = 211
    # output_width = os.get_terminal_size().columns
    for i, item in enumerate(lst):
        perc = f"{(i + 1) / length:4.0%}"
        status = f"{i + 1}/{length}"
        bar_width = output_width - 33 - len(status)
        progress = (bar_width - 3) * (i + 1) // length
        bar = f"[{'=' * progress}>{' ' * (bar_width - 3 - progress)}]"
        output = f"\r{perc}|{bar}| {status}"
        print(output, end="", flush=True)
        yield item
    print()
