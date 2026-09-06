class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> answer = new ArrayList<>();
        backtrack(nums, new ArrayList<>(), answer);
        return answer;
    }

    private void backtrack(
            int[] nums,
            List<Integer> current,
            List<List<Integer>> answer) {

        if (current.size() == nums.length) {
            answer.add(new ArrayList<>(current));
            return;
        }

        for (int num : nums) {

            if (current.contains(num)) {
                continue;
            }

            current.add(num);
            backtrack(nums, current, answer);
            current.remove(current.size() - 1);
        }
    }
}