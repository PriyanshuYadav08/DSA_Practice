from collections import defaultdict


def group_anagrams(words):
    groups = defaultdict(list)
    for word in words:
        key = ''.join(sorted(word))
        groups[key].append(word)
    return list(groups.values())


if __name__ == "__main__":
    n = int(input("Enter the number of words: "))
    words = [input("Enter word: ").strip() for _ in range(n)]
    result = group_anagrams(words)
    print(result)
