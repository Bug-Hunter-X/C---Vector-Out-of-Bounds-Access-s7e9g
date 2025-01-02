std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i <= vec.size(); ++i) { //Error here: should be i < vec.size()
  std::cout << vec[i] << " ";
}

//This causes undefined behavior as it tries to access memory beyond the vector bounds.
//The last iteration will cause a crash or unpredictable output.