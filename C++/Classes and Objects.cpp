class Student 
{
 public:
 int score=0;
 void input()
 {
  int mark[5];
  for(int i=0;i<5;i++)
  {
    cin>>mark[i];
    score+=mark[i];
  }
 }
 int calculateTotalScore()
 {
  return score;
 } 
};

