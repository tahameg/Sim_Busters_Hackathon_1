#include<iostream>
#include "A.cpp"
#include "B.cpp"
#include "C.cpp"

class D: public A, public B, public C
{
	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }

        

		 //Implement this function
		 void update_val(int new_val)
		 {
            int divisor_counts[3];
            get_divisor_counts(new_val, divisor_counts);
            std::cout << "A's func will be called " << divisor_counts[0] << " times." << std::endl;
            std::cout << "B's func will be called " << divisor_counts[1] << " times." << std::endl;
            std::cout << "C's func will be called " << divisor_counts[2] << " times." << std::endl;
            for(int i = 0; i < divisor_counts[0]; i++){
                this->A::func(val);
            }
            for(int i = 0; i < divisor_counts[1]; i++){
                this->B::func(val);
            }
            for(int i = 0; i < divisor_counts[2]; i++){
                this->C::func(val);
            }
		}

        void print_val(){
            std::cout << "The new val is " << this->val << std::endl;
        } 
		//For Checking Purpose
		void check(int); //Do not delete this line.
    
    private:
        //Get counts of 2, 3 and 5 divisors. 
        //This functions returns the counts of each divisor inside the out_array in order of [`num_of_twos`, `num_of_threes`, `num_of_fives`].
        //Warning: n is expected to only include 2s, 3s and 5s as prime factors
        void get_divisor_counts(int n, int * out_array){
            int last_n = n;
            int count_two = 0;
            int count_three = 0;
            int count_five = 0;
            while(last_n%2 == 0){
                last_n /= 2;
                count_two++; 
            }
            while(last_n%3 == 0){
                last_n /= 3;
                count_three++; 
            }
            while(last_n%5 == 0){
                last_n /= 5;
                count_five++; 
            }
            out_array[0]=count_two;
            out_array[1]=count_three;
            out_array[2]=count_five;
        }
};