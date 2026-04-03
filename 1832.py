class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        return len(set(sentence)) == 26


# Time: O(n), n = length of the sentence
# Space: O(1), because the set can have at most 26 letters