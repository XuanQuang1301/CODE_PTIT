contact = []
with open("DATA.in", "r", encoding ="utf-8") as f:
    lines = [line.strip() for line in f if line.strip()]
date = ""
i = 0
while i < len(lines):
    line = lines[i]
    if line.startswith("Ngay"):
        date = line.split(" ", 1)[1]
        i += 1
    else:
        name = line
        phone = lines[i + 1] if i + 1 < len(lines) else ""
        contact.append((name, phone, date))
        i += 2
def sort_key(contact):
    name_p = contact[0]
    last_name = name_p[-1]
    middle_name = " ".join(name_p[1:-1])
    first_name = name[0]
    return (last_name, middle_name, first_name)
contact = sorted(contact, key = sort_key)
with open("CONTACT.in", "w", encoding ="utf-8") as f:
    for name, phone, date in contact:
        f.write(f"{name}: {phone} {date}\n")