class Solution {
    List<List<Integer>> result = new ArrayList<>();

    public List<List<Integer>> subsets(int[] nums) {
        fun(nums,0,new ArrayList<>());
        return result;
    }

    public void fun(int[] nums, int index, List<Integer> cur) {
        if(index == nums.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        cur.add(nums[index]);
        fun(nums,index+1,cur);
        cur.remove(cur.size() - 1);
        fun(nums,index+1,cur);


    }

}