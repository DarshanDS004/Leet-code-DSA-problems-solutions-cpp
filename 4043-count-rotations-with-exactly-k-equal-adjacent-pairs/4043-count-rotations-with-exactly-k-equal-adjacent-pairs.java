class Solution {

    public String rotate(String s) {
        StringBuilder st = new StringBuilder(s);
        int n = st.length();
        char first = st.charAt(0);
        for (int i = 0; i < n - 1; i++) {
            st.setCharAt(i, st.charAt(i + 1));
        }

        // Put the first character at the end
        st.setCharAt(n - 1, first);

        return st.toString();
    }

    public int score(String s) {
        int n = s.length();
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s.charAt(i) == s.charAt(i + 1)) {
                count++;
            }
        }

        return count;
    }

    public int countRotations(String s, int k) {
        int n = s.length();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (score(s) == k) {
                count++;
            }

            s = rotate(s);
        }

        return count;
    }
}
