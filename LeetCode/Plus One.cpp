vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        bool overflow = false;
        if(digits[n]<9)
        {
            digits[n]++;
            return digits;
        }
        else
        {
            while(digits[n]==9)
            {
                digits[n] = 0;
                if(n==0)
                {
                    digits[n] = 0;
                    overflow = true;
                    break;
                }
                n = n-1;
            }
        }
        if(overflow)
        {
            digits.push_back(1);
            reverse(digits.begin(), digits.end());
            return digits;
        }
        ++digits[n];
        return digits;
    }