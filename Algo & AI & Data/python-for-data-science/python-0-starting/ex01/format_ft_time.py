import datetime as dt

now = dt.datetime.now()
timestamp = now.timestamp()

line1 = "Seconds since January 1, 1970: "
line1 += f"{timestamp:,.4f}"
line1 += " or "
line1 += f"{timestamp:.3}"
line1 += " in scientific notation"

line2 = f"{now.strftime('%b %d %Y')}"

print(line1)
print(line2)
