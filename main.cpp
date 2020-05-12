#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int numStu;
    string stuName;
public:
    Student() {}

    Student(int _numStu, string _stuName) {
        numStu=_numStu;
        stuName=_stuName;
    }



    int getNumStu() const {
        return numStu;
    }

    void setNumStu(int numStu) {
        Student::numStu = numStu;
    }

    const string &getStuName() const {
        return stuName;
    }

    void setStuName(const string &stuName) {
        Student::stuName = stuName;
    }

};

class Score {
private:
    Student student;
    float scoreMath;
    float scoreEnglish;
    float scoreChinese;
public:
    Score() {}

    Score(Student _student, float _scoreMath, float _scoreEnglish, float _scoreChinese) {
        student = _student;
        scoreChinese = _scoreChinese;
        scoreEnglish = _scoreEnglish;
        scoreMath = _scoreMath;
    }

    float getScoreMath() const {
        return scoreMath;
    }

    void setScoreMath(float scoreMath) {
        Score::scoreMath = scoreMath;
    }

    float getScoreEnglish() const {
        return scoreEnglish;
    }

    void setScoreEnglish(float scoreEnglish) {
        Score::scoreEnglish = scoreEnglish;
    }

    float getScoreChinese() const {
        return scoreChinese;
    }

    void setScoreChinese(float scoreChinese) {
        Score::scoreChinese = scoreChinese;
    }


//    string getStuName(){
//        return this->student->getStuName();
//    }
    void getAverage() {//平均分
        double ave = (scoreMath + scoreEnglish + scoreChinese) / 3.0;
        cout << student.getStuName()<<":" << ave << endl;
    }

};


int main() {
//    Student* student1 = new Student(1901,"a");///栈怎么用
//    Student* student2 = new Student(1902,"b");
//    Student* student3 = new Student(1903,"4");
//    Score* score1 = new Score(*student1,90,88,78);
//    Score* score2 = new Score(*student2,68,84,98);
//    Score* score3 = new Score(*student3,94,86,58);
//    score1->getAverage();
//    score2->getAverage();
//    score3->getAverage();


    Student student1(1901, "a");
    Student student2(1902,"b");
    Student student3(1903,"c");
    Score score1(student1,90,88,78);
    Score score2(student2,68,84,98);
    Score score3(student3,94,86,58);
    score1.getAverage();
    score2.getAverage();
    score3.getAverage();

}
