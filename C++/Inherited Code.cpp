class BadLengthException
{
 public:
 int n;
 int what()
 {
   return n;
 }
 BadLengthException(int elem)
 {
  n = elem;
 }
};
