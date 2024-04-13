#ifndef SCORE_H
#define SCORE_H

class Score

{
public:
    Score();
    Score(int score);
    Score(const Score &s); // copy constructor
    ~Score();
    void add(int points);
    void sub(int points);
    int get_score() const;

private:
    int score;
};

#endif