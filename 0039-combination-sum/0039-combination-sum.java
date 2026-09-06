class Solution {

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> answer = new ArrayList<>();
        backtrack(0, target, candidates, new ArrayList<>(), answer);
        return answer;
    }

    private void backtrack(
            int index,
            int target,
            int[] candidates,
            List<Integer> current,
            List<List<Integer>> answer) {

        if (target == 0) {
            answer.add(new ArrayList<>(current));
            return;
        }

        if (index == candidates.length || target < 0) {
            return;
        }

        current.add(candidates[index]);

        backtrack(
            index,
            target - candidates[index],
            candidates,
            current,
            answer
        );

        current.remove(current.size() - 1);
        backtrack(
            index + 1,
            target,
            candidates,
            current,
            answer
        );
    }
}