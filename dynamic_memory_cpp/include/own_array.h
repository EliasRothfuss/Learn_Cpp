#ifndef OWN_ARRAY_LEWISGUTIERREZ
#define OWN_ARRAY_LEWISGUTIERREZ

#include <memory>

class own_array
{

   public:
    own_array(int num_of_elements);
    void insert(int index, int data);
    void print(int index);
    int get(int index);
   private:
    std::shared_ptr<int[]> ptr;
};

#endif
