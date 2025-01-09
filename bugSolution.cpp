std::vector<int> vec; 
vec.push_back(1);
vec.push_back(2);

try { 
  vec.at(2) = 3; // Using at() for bounds checking. Throws exception if out of bounds
} catch (const std::out_of_range& oor) { 
  std::cerr << "Out of Range error: " << oor.what() << '\n';
}
// Alternatively, check the size before accessing:
// if (vec.size() > 2) { vec[2] = 3; } 