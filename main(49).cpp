#include <iostream>

#include <vector>




using namespace std;




int main()

{

    int quizzes[5];

    quizzes[0] = 100;

    quizzes[1] = 100;

    quizzes[2] = 100;







    vector<int>myQuizzes;

    cout << "Capacity is : " << myQuizzes.capacity() << endl;

    cout << "Size is : "  << myQuizzes.size() << endl;




    myQuizzes.push_back(100);

    myQuizzes.push_back(95);

    myQuizzes.push_back(99);

    myQuizzes.push_back(78);

    myQuizzes.push_back(91);




    cout << "Capacity is : " << myQuizzes.capacity() << endl;

    cout << "Size is : "  << myQuizzes.size() << endl;




    return 0;

}
