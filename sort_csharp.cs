class Test
{
    private static float[] SortNumArray(float[] nums)
    {
        int Length = nums.Length;
        float[] sorted = new float[Length];
        float max = 0;

        for (int i = 0; i < Length; i++)
        {
            if (nums[i] > max)
                max = nums[i];
        }

        float min = max;

        for (int i = 0; i < Length; i++)
        {
            for (int v = 0; v < Length; v++)
            {  
                if (nums[v] <= min && sorted.Contains(nums[v]) == false)
                    min = nums[v];
            }
            if (sorted.Contains(min) == false)
            {
                sorted[i] = min;    
            }
            min = max;
        }
        return sorted;
    }
}

