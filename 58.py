def length_of_last_word(s: str) -> int:
    length = 0
    i = len(s) - 1

    # Skip trailing spaces
    while i >= 0 and s[i] == ' ':
        i -= 1

    # Count last word length
    while i >= 0 and s[i] != ' ':
        length += 1
        i -= 1

    return length

# Example usage
s = "   Hello World  "
print(length_of_last_word(s))  # Output: 5