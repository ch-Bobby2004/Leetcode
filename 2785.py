class Solution:
    def sortVowels(self, s: str) -> str:
        vowels_set = set("aeiouAEIOU")
        
        # Step 1: collect vowels
        # vowels = []
        # for c in s:
        # if c in vowels_set:
        # vowels.append(c)
        vowels = [c for c in s if c in vowels_set]
        
        # Step 2: sort vowels
        vowels.sort()
        
        # Step 3: replace vowels in string
        result = list(s)
        j = 0
        
        for i in range(len(result)):
            if result[i] in vowels_set:
                result[i] = vowels[j]
                j += 1
        
        return "".join(result)