

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> umap = new HashMap<>(); // a HashMap to store the key=sorted string and value=vector containing all anagrams.

        for (String str : strs) {
            char[] charArray = str.toCharArray();
            Arrays.sort(charArray);
            String sortedString = new String(charArray);

            if (!umap.containsKey(sortedString)) {
                umap.put(sortedString, new ArrayList<>());
            }

            umap.get(sortedString).add(str); // pushback the original string into the map's value (list of anagrams).
        }

        List<List<String>> ans = new ArrayList<>();

        for (Map.Entry<String, List<String>> entry : umap.entrySet()) {
            ans.add(entry.getValue()); // put the list of anagrams (second column of the map) into ans.
        }

        return ans;
    }
}
