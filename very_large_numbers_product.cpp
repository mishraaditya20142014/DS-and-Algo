// A function to find the product of two very very large numbers which might be even larger than long long int...

string multiply(string s1, string s2)
{
  int len1 = s1.size();
  int len2 = s2.size();
  if (len1 == 0 || len2 == 0)
    return "0";
  vector<int> result(len1 + len2, 0);
  int is1 = 0, is2 = 0;
  for (int i = len1 - 1; i >= 0; i--)
  {
    is2 = 0;
    int digit1 = s1.at(i) - '0';
    int carry = 0;
    for (int j = len2 - 1; j >= 0; j--)
    {
      int digit2 = s2.at(j) - '0';
      int product = digit1 * digit2 + result[is1 + is2] + carry;
      carry = product / 10;
      result[is1 + is2] = product % 10;
      is2++;
    }
    if (carry > 0)
      result[is1 + is2] += carry;
    is1++;
  }
  int i = result.size() - 1;
  while (i >= 0 && result[i] == 0)
    i--;
  if (i == -1)
    return "0";
  string s = "";
  while (i >= 0)
    s += std::to_string(result[i--]);
  return s;
}
