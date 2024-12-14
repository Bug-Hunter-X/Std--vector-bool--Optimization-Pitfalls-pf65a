std::vector<bool> vec; // This is the problem.  It's often implemented with bit manipulation for space optimization, but this optimization can lead to unexpected behavior.
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This might behave unexpectedly due to how std::vector<bool> is specialized.
bool c = vec[1]; // And this also might.