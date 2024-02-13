def main():
    while True:
        try:
            height = int(input("Height: "))
            if 1 <= height <= 8:
                break
        except ValueError:
            pass

    for i in range(1, height + 1):
        spaces = " " * (height - i)
        hashes = "#" * i
        print(f"{spaces}{hashes}  {hashes}")

if __name__ == "__main__":
    main()
