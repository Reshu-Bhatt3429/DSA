def count_even_length_words():
    sentence = "this is a test sentence"
    count = 0
    words = sentence.split()
    for word in words:
        if len(word) % 2 == 0:
            count += 1
    return count