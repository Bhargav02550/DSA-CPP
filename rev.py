def reverse_string(input_str):
    if len(input_str) <= 1:
        return input_str
    return reverse_string(input_str[1:]) + input_str[0]
input_str = input()
result = reverse_string(input_str)
print(result)
