class Solution {
    public String getPermutation(int n, int k) {

        List<Integer> numbers = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            numbers.add(i);
        }

        int factorial = 1;
        for (int i = 1; i < n; i++) {
            factorial *= i;
        }
        k--;
        StringBuilder ans = new StringBuilder();

        while (!numbers.isEmpty()) {

            int index = k / factorial;

            ans.append(numbers.get(index));
            numbers.remove(index);

            if (numbers.size() == 0) {
                break;
            }
            k = k % factorial;

            factorial = factorial / numbers.size();
        }
        return ans.toString();
    }
}