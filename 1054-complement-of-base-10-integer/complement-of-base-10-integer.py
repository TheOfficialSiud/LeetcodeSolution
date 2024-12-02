class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        if(n==0):
            return 1
        st=""
        while(n):
            if(str(n%2)=='0'):
                st+='1'
            else:
                st+='0'
            n=n/2
        st=st[::-1]
        
        return int(st,2)
        