#include "model/Score.h"

// Constructor definitions
Score::Score()
{
    score = 0;
}

Score::Score(int s)
{
    score = s;
}

Score::Score(const Score &s)
{
    score = s.score;
}

// Destructor definition
Score::~Score()
{
    // nothing to do
}

// Getter
int Score::get_score() const
{
    return score;
}

// Add points to the score
void Score::add(int points)
{
    score += points;
}

// Subtract points from the score
void Score::sub(int points)
{
    score -= points;
}