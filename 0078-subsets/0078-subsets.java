class Solution {
    List<List<Integer>> result = new ArrayList<>();

    public List<List<Integer>> subsets(int[] nums) {
        fun(nums,0,new ArrayList<>());
        return result;
    }

    public void fun(int[] nums, int index, List<Integer> current) {
        result.add(new ArrayList<>(current));

        for (int i = index; i < nums.length; i++) {
            current.add(nums[i]);
            fun(nums, i + 1, current);

            current.remove(current.size() - 1);
        }

    }

}