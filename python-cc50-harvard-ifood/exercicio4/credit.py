from cs50 import get_string

def main():
    card_number = get_string("Number: ")
    if is_valid(card_number):
        print(card_type(card_number))
    else:
        print("INVALID")

def is_valid(number):
    # Algoritmo de Luhn
    total = 0
    for i, digit in enumerate(reversed(number), start=1):
        if i % 2 == 0:
            doubled = int(digit) * 2
            total += doubled if doubled < 10 else doubled - 9
        else:
            total += int(digit)
    return total % 10 == 0

def card_type(number):
    length = len(number)
    if (length == 15 and number.startswith(('34', '37'))):
        return "AMEX"
    elif (length == 16 and number.startswith(('51', '52', '53', '54', '55'))):
        return "MASTERCARD"
    elif (length in [13, 16] and number.startswith('4')):
        return "VISA"
    return "INVALID"

if __name__ == "__main__":
    main()
