class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        c=0
        sen_lis=sentence.split(' ')
        for item in sen_lis:
            c+=1
            if(item.startswith(searchWord)):
                return c
        
        return -1


        