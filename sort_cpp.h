bool IsContains(float sorted[], const float value, const int length)
{
	bool contains = false;

	for (int i = 0; i < length; i++)
	{
		if (sorted[i] == value)
		{
			contains = true;
			break;
		}
	}

	return contains;
}

float * SortNumArray(float nums[], const int length)
{
	static float sorted[] = { float() * length };
	float max = 0;
	for (int i = 0; i < length; i++)
	{
		if (nums[i] > max)
			max = nums[i];
	}
	
	float min = max;

	for (int i = 0; i < length; i++)
	{
		for (int v = 0; v < length; v++)
		{
			if (nums[v] <= min && IsContains(sorted, nums[v], length) == false)
				min = nums[v];
		}
		if (IsContains(sorted, min, length) == false)
		{
			sorted[i] = min;
		}
		min = max;
	}
	return sorted;
}
