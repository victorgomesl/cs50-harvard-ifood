from cs50 import get_float

def main():
    while True:
        change_owed = get_float("Change owed: ")
        if change_owed >= 0:
            break

    cents = round(change_owed * 100)
    coins = 0

    for coin in [25, 10, 5, 1]:
        coins += cents // coin
        cents %= coin

    print(coins)

if __name__ == "__main__":
    main()
