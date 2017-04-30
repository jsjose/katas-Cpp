using namespace std;

class ScoreCard 
{
public:
  ScoreCard();
  /*
  * A public method accepting the result of an at-bat
  * @param {string} entry - The result of an at-bat 
  * Acceptable values: ('single', 'double', 'triple', 'homerun' or 'out') 
  */
  void addEntry(string entry);
  /*
  * A public method returning the current score
  * Format: "Home: [HOME_SCORE] Away: [AWAY_SCORE]"
  */
  string getScore();
};