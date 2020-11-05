// categorized by count approach
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List> map = new HashMap<String, List>();
        int[] count = new int[26];
        for (String str : strs){
            Arrays.fill(count, 0);
            for (int i=0; i<str.length(); i++){
                count[str.charAt(i)-'a']++;
            }
            StringBuilder sb = new StringBuilder();
            for (int i : count){
                sb.append('#');
                sb.append(i);
            }
            String s = sb.toString();
            if(!map.containsKey(s)){
                map.put(s, new ArrayList());
            }
            map.get(s).add(str);
        }
        return new ArrayList(map.values());
    }
}
