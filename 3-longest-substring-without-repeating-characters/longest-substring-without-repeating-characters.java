class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set = new HashSet<>();

        int low = 0;
        int high = 0;
        int max = 0;
        int lngMax = 0;

        while (high < s.length()) {
            if (!set.contains(s.charAt(high))) {
                set.add(s.charAt(high));
                high++;
            } else {
                set.remove(s.charAt(low));
                low++;
            }
            max = high - low;
            lngMax = Math.max(max, lngMax);
        }

        return lngMax;
    }
}